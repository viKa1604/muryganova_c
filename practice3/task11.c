#include <stdio.h>

int main(){

    int n, x, count = 0;

    printf("Введите число n:");
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Введите число x:");
    scanf("%d", &x);

    for(int i = 0; i < n; i++) {
        if (arr[i] == x) {
            count++;
        }
    }
    printf("Сколько число x встречается в массиве: %d", count);

return 0;
    
}