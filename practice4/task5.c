#include <stdio.h>

int main() {
    int num = 77, num2 = 88;
    int *ptr1 = &num;
    int *ptr2 = &num;
    
    if (ptr1 == ptr2) {
        printf("ptr1 и ptr2 равны\n");
    } else {
        printf("ptr1 и ptr2 не равны\n");
    }
return 0;

}