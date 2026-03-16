#include <stdio.h>

int main() {
    int num1, num2;
    
    printf("Введите два числа: ");
    scanf("%d %d", &num1, &num2);

    num1 += num2;
    num2 = num1 - num2;
    num1 -= num2;

    printf("первое число: %d, второе число: %d \n\n", num1, num2);

    return 0;
}