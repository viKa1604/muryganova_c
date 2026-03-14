#include <stdio.h>

int main() {
    int a, b, c;

    printf("Введите три целых числа: ");
    scanf("%d %d %d", &a, &b, &c);

    if(a + b == c){
        printf("%d + %d = %d --> магическая тройка", a, b, c);
    } else{
        printf("%d + %d != %d --> не магическая тройка", a, b, c);
    }
return 0;

}