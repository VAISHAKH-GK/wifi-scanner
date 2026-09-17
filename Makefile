build:
	@mkdir -p bin
	@gcc -o bin/wifi-scanner src/main.c

run: build
	@./bin/wifi-scanner
