#include <stdio.h>

int main() {
    FILE *file = fopen("test.txt", "rb");
    if (file == NULL) return 1;
    fseek(file, 0, SEEK_END);
    long size = ftell(file);
    printf("Size: %ld bytes\n", size);
    fclose(file);
    return 0;
}