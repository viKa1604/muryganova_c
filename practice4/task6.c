#include <stdio.h>

int main() {
    int num = 999;
    int *ptr1 = &num;
    int *ptr2;
    
    
    printf("Значение через ptr1: %d\n", *ptr1);
    printf("Значение через ptr2: %d\n", *ptr2);
    
    if (ptr1 == ptr2) {
        printf("Адреса совпадают\n");
    } else {
        printf("Адреса не совпадают\n");
    }
    
    return 0;

}