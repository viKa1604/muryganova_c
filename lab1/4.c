#include <stdio.h>

int main() {
    int num1, num2;
    int remaind;
    
    printf("Введите два целых числа: ");
    scanf("%d %d", &num1, &num2);
    
    if (num2 == 0) {
        printf("Ошибка: деление на ноль!\n");
        return 1;
    }
    
    remaind = num1 % num2;
    
    printf("%d %% %d = %d\n", num1, num2, remaind);
    
    return 0;
}