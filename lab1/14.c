#include <stdio.h>

int main() {
    int a, b, c;
    printf("%p\n", (void*)&a);
    printf("%p\n", (void*)&b);
    printf("%p\n", (void*)&c);
    
    printf("%ld\n", (char*)&b - (char*)&a);
    printf("%ld\n", (char*)&c - (char*)&b);
    return 0;
}
// Переменные размещаются в памяти последовательно в порядке объявления. 
// Каждая переменная int занимает 4 байта. Разница между адресами показывает, сколько объектов типа int помещается между ними
