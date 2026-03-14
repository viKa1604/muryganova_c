#include <stdio.h>

int main() {
    int num1, num2, num3;
    int summ;
    
    printf("Введите три целых числа: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    summ = num1 + num2 + num3;

    printf("Среднее арифметическое: %d\n", summ / 3);

    return 0;
}