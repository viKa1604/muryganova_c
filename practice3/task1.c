#include <stdio.h>

int main() {

    int numbers[10] = {};
    printf("Введите 10 чисел:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &numbers[i]);
    }
    printf("В обратном порядке:\n");
    for(int i = 9; i >= 0; i--) { 
        printf("%d ", numbers[i]);
    }
return 0;
}