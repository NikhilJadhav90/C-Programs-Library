#include <stdio.h>
int main() {
    FILE *fp = fopen("example.txt", "w");
    if (fp == NULL) {
        printf("Failed to open file.\n");
        return 1;
    }
    fprintf(fp, "Hello, file I/O in C!\n");
    fclose(fp);

    fp = fopen("example.txt", "r");
    char ch;
    while ((ch = fgetc(fp)) != EOF)
        putchar(ch);
    fclose(fp);
    return 0;
}