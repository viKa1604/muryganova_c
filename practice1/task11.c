#include <stdio.h>

int main() {

    int num;
    
    printf("Введите число: ");
    scanf("%d", &num);
    
    if (num % 2 == 0) {
        printf("Число %d чётное", num);
    } else {
        printf("Число %d нечётное", num);
    }

return 0;

}
    
