#include <stdio.h>

int main() {

    printf("-Размеры типов данных:   \n");
    printf("Размер char: %zu\n", sizeof(char));
    printf("Размер int: %zu\n", sizeof(int));
    printf("Размер float: %zu\n", sizeof(float));
    printf("Размер double: %zu", sizeof(double));

    return 0;
}