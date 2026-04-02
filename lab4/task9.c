#include <stdio.h>

int main() {
    FILE *file = fopen("test.txt", "w+");
    if (file == NULL) return 1;
    fprintf(file, "ABCDEFGH");
    fseek(file, 2, SEEK_SET);
    printf("%c\n", fgetc(file));
    fclose(file);
    return 0;
}