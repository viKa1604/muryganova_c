#include <stdio.h>

int main() {
    int num;
    printf("Введите трёхзначное целое число: ");
    scanf("%d", &num);
    int hundreds = num / 100;
    int tens = (num / 10) % 10;
    int units = num % 10;
    printf("Сотни: %d, Десятки: %d, Единицы: %d\n", hundreds, tens, units);
    return 0;
}