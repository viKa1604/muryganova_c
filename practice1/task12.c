#include <stdio.h>

int main() {
    int num1, num2, num3;
    int max;
    
    printf("Введите три числа: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    if (num1 >= num2 && num1 >= num3) {
        max = num1;
    } else if (num2 >= num1 && num2 >= num3) {
        max = num2;
    } else {
        max = num3;
    }
    
    printf("Наибольшее число: %d\n", max);
    
    return 0;

}