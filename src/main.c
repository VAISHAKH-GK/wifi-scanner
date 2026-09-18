#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    if (argc != 2) {
        printf("Usage: %s <interface>\n", argv[0]);
        printf("Example: sudo %s wlan0\n", argv[0]);
        return 1;
    }

    char command[256];

    printf("WiFi Scanner\n");
    printf("===========\n");
    printf("Interface: %s\n\n", argv[1]);

    snprintf(
        command,
        sizeof(command),
        "iw dev %s scan | grep -E 'BSS |SSID:|signal:|freq:'",
        argv[1]
    );

    system(command);

    return 0;
}