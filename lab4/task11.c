#include <stdio.h>

int main() {
    FILE *file = fopen("test.txt", "r");
    if (file == NULL) return 1;
    int c;
    while ((c = fgetc(file)) != EOF)
        putchar(c);
    if (feof(file))
        printf("\nEnd of file\n");
    if (ferror(file))
        printf("Error\n");
    fclose(file);
    return 0;
}