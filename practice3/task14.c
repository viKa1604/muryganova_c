#include <stdio.h>

int main(){

    int n, sum = 0;

    printf("Введите число n:");
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i += 2) {
        sum += arr[i];
    }
printf("Сумма чисел на чётных позициях: %d ", sum);

return 0;
    
}