#include <stdio.h>

int main() {
    double num1, num2, result;
    char operation;
    
    printf("Введите выражение: ");
    scanf("%lf %c %lf", &num1, &operation, &num2);
    
    switch (operation) {
        case '+':
            result = num1 + num2;
            printf("%.2f + %.2f = %.2f\n", num1, num2, result);
            break;
        case '-':
            result = num1 - num2;
            printf("%.2f - %.2f = %.2f\n", num1, num2, result);
            break;
        case '*':
            result = num1 * num2;
            printf("%.2f * %.2f = %.2f\n", num1, num2, result);
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
                printf("%.2f / %.2f = %.2f\n", num1, num2, result);
            } else {
                printf("Ошибка: деление на ноль!\n");
            }
            break;
        default:
            printf("Ошибка: неизвестная операция '%c'\n", operation);
    }
    
    return 0;
}