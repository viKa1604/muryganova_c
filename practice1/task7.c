#include <stdio.h>

int main() {

    int num1, num2;
    
    printf("Введите два целых числа: ");
    scanf("%d %d", &num1, &num2);

    if (num2 == 0) {
        printf("Делить на ноль нельзя!\n");
        return 1;
    }
    
    printf("%f", (float) num1 / num2);

return 0;

}