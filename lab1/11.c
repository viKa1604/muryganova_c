#include <stdio.h>

int main() {
    int num;
    printf("Введите целое число ");
    scanf("%d", &num);
    printf("%d\n", num % 10);
    return 0;
}