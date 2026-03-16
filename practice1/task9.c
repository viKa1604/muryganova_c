#include <stdio.h>

int main() {

    int num;
    
    printf("Введите число: ");
    scanf("%d", &num);
    
    if (num % 2 == 0 && num % 3 == 0) {
        printf("Число %d делится и на 2, и на 3\n", num);
    } else if (num % 2 == 0) {
        printf("Число %d делится только на 2\n", num);
    } else if (num % 3 == 0) {
        printf("Число %d делится только на 3\n", num);
    } else {
        printf("Число %d не делится ни на 2, ни на 3\n", num);
    }
    
    return 0;
}