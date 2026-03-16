#include <stdio.h>

int main() {
    int a, b, c;
    float res;
    
    printf("Введите числа a, b и c: ");
    scanf("%d %d %d", &a, &b, &c);
    
    res = ((a + b) * c) / 2.0;
   
    printf("((%d + %d) * %d) / 2 = %.2f\n", a, b, c, res);
    
    return 0;
}