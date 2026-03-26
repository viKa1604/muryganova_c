#include <stdio.h>

int main() {
    int num = 111;
    int *ptr = &num;
    int **ptr2 = &ptr;
    
    printf("До изменения: %d\n", num);
    
    **ptr2 = 777;
    
    printf("После изменения: %d\n", num);
    
    return 0;
}