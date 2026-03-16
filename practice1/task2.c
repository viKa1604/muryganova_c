#include <stdio.h>

int main() {
     int a, b;

     printf("Введите два натуральных числа:");

     scanf("%d %d", &a, &b);

     printf("Сумма %d + %d = %d\n", a, b, a + b);
     printf("Разность %d - %d = %d\n", a, b, a - b);
     printf("Умножение %d * %d = %d\n", a, b, a * b);

     if (b != 0) {
        printf("Деление %d / %d = %d\n", a, b, a / b);
     } else {
        printf("Делить на ноль нельзя\n");
     }

     return 0;
}