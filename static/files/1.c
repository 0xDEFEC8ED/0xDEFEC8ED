#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() {
    char *buffer = malloc(14);
    buffer[0] = 'h';
    buffer[1] = 'a';
    buffer[2] = 'c';
    buffer[3] = 'k';
    buffer[4] = 't';
    buffer[5] = 'h';
    buffer[6] = 'e';
    buffer[7] = 'p';
    buffer[8] = 'l';
    buffer[9] = 'a';
    buffer[10] = 'n';    
    buffer[11] = 'e';
    buffer[12] = 't';
    buffer[13] = '\0';
    char *input = malloc(14);
    char useless[] = "hacktheplanet";
    printf("Enter the password: ");
    fgets(input, 14, stdin);
    if (strncmp(input, buffer, 8) == 0) {
        printf("This is the secret Flag\n");
    } else {
        printf("Access denied!\n");
    }
    return 0;}