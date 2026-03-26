#include <stdio.h>

int main() {
    char str[] = "aaabbcc";
    char *r = str, *w = str;
    
    printf("Исходная: %s\n", str);
    
    while (*r) {
        if (*r != *w) {
            w++;
            *w = *r;
        }
        r++;
    }
    w++;
    *w = '\0';
    
    printf("Результат: %s\n", str);
    
    return 0;
}