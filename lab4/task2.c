#include <stdio.h>

int main() {
    FILE *file = fopen("test.txt", "w");
    if (file == NULL) return 1;
    putc('A', file);
    putc('B', file);
    putc('C', file);
    fclose(file);

    file = fopen("test.txt", "r");
    if (file == NULL) return 1;
    int ch;
    while ((ch = getc(file)) != EOF)
        putchar(ch);
    fclose(file);
    return 0;
}