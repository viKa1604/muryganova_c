#include <stdio.h>

int main() {
    int num = 555;
    int *ptr = &num;
    int **ptr2 = &ptr;
    
    printf("Значение переменной: %d\n", num);
    printf("Через указатель: %d\n", *ptr);
    printf("Через указатель на указатель: %d\n", **ptr2);
    
    return 0;
}