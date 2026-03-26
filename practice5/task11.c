#include <stdio.h>

int main() {
    char str[] = "aaabbc";
    char *p = str;
    
    printf("Исходная: %s\n", str);
    printf("Сжатая: ");
    
    while (*p) {
        char *start = p;
        while (*p == *(p + 1)) {
            p++;
        }
        printf("%c%d", *start, p - start + 1);
        p++;
    }
    printf("\n");
    
    return 0;
}