#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
    char *interface;
    bool freq;

    if (argc < 2) {
        printf("Usage: %s <interface>\n", argv[0]);
        printf("Example: sudo %s wlan0\n", argv[0]);
        return 1;
    }

    for(int i = 1; i < argc; i++) {
        if(strcmp(argv[i], "--interface") == 0) {
            if (i + 1 < argc) {
                interface = strdup(argv[i+1]);
            } else {
                fprintf(stderr, "Error: --interface requires a value\n");
                return 1;
            }
        } else if (strcmp(argv[i], "--freq") == 0) {
            freq = true;
        }
    }

    if (interface == NULL) {
        fprintf(stderr, "Error: require --interface\n");
        return 1;
    }

    char command[256];

    printf("WiFi Scanner\n");
    printf("===========\n");
    printf("Interface: %s\n\n", interface);

    char *grep_command = NULL;
    char *query;

    if (freq) {
        asprintf(&grep_command, "'BSS |SSID:|signal:|freq:'");
    } else {
        asprintf(&grep_command, "'BSS |SSID:|signal:'");
    }

    asprintf(&query, "iw dev %s scan | grep -E %s", interface, grep_command);

    system(query);

    free(grep_command);
    free(query);

    return 0;
}