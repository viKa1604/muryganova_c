#include <stdio.h>

int main() {
    char ch;
    
    printf("Введите символ: ");
    scanf("%c", &ch);
    
    printf("Символ '%c' - ", ch);
    
    if (ch >= '0' && ch <= '9') {
        printf("цифра\n");
    } else if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
        printf("буква\n");
    } else {
        printf("другой символ\n");
    }
    
    return 0;
}