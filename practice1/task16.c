#include <stdio.h>

int main() {
    int x;
    int res;
    
    printf("Введите число x: ");
    scanf("%d", &x);
    
    if (x > 0) {
        res = x * x;  
        printf("Результат: %d", res);
    } else if (x == 0) {
        res = 0;
        printf("Результат: 0");
    } else { 
        res = -x;  
        printf("Результат: %d\n", res);
    }
    
    return 0;
}