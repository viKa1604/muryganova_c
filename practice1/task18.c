#include <stdio.h>
#include <limits.h>

int main(){
    int a;
    printf("Введите число: ");
    scanf("%d", &a);

    a += INT_MAX;
    printf("%d", a);

    return 0;
}