#include <stdio.h>

int main() {
    int *int_ptr;
    char *char_ptr;
    double *double_ptr;
    void *void_ptr;
    
    printf("Размер указателя на int: %zu байт\n", sizeof(int_ptr));
    printf("Размер указателя на char: %zu байт\n", sizeof(char_ptr));
    printf("Размер указателя на double: %zu байт\n", sizeof(double_ptr));
    printf("Размер указателя на void: %zu байт\n", sizeof(void_ptr));
    
    return 0;
}