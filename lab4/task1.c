#include <stdio.h>

int main() {
    FILE *file = fopen("test.txt", "w");
    if (file == NULL) {
        printf("Ошибка: не удалось открыть файл\n");
        return 1;
    }
    printf("Файл успешно открыт\n");
    fclose(file);
    return 0;
}