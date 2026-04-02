#include <stdio.h>

int main() {
    FILE *file = fopen("test.txt", "w");
    if (file == NULL) return 1;
    fputs("Hello\n", file);
    fputs("World\n", file);
    fclose(file);

    file = fopen("test.txt", "r");
    if (file == NULL) return 1;
    char buffer[100];
    while (fgets(buffer, sizeof(buffer), file) != NULL)
        printf("%s", buffer);
    fclose(file);
    return 0;
}