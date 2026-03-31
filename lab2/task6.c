#include <stdio.h>

union Data {
    int i;
    float f;
    char c;
};

struct tagged_data {
    union Data data;
    int type;
};

int main() {
    struct tagged_data td;

    td.data.i = 42;
    td.type = 1;
    printf("Хранится int: %d\n", td.data.i);
    
    td.data.f = 3.14;
    td.type = 2;
    printf("Хранится float: %.2f\n", td.data.f);
    printf("Значение int после записи float: %d\n", td.data.i);
    
    td.data.c = 'A';
    td.type = 3;
    printf("Хранится char: %c\n", td.data.c);
    printf("Значение float после записи char: %.2f\n", td.data.f);
    
    return 0;
}
