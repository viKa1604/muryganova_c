#include <stdio.h>

int main() {
    int a = 5, b = 10;
    int *ptr_a = &a, *ptr_b = &b;
    
    printf("a = %d, b = %d\n", a, b);
    
    int t = *ptr_a;
    *ptr_a = *ptr_b;
    *ptr_b = t;
    printf("a = %d, b = %d\n", a, b);
    
    return 0;
}