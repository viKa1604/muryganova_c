#include <stdio.h>

int main() {
    int *ptr1 = NULL;
    int num = 42;
    int *ptr2 = &num;
    
    if (ptr1 == NULL) {
        printf("ptr1 является NULL\n");
    } else {
        printf("ptr1 не является NULL\n");
    }
    
    if (ptr2 == NULL) {
        printf("ptr2 является NULL\n");
    } else {
        printf("ptr2 не является NULL\n");
    }
    
    return 0;
}