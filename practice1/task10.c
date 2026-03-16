#include <stdio.h>

int main() {

    int n;

    printf("Введите число: ");
    scanf("%d", &n);

    printf("%d\n", n & 1);
    printf("%d\n", n | 1);
    printf("%d\n", n ^ 1);
    printf("%d\n", ~n);
    
    return 0;
}