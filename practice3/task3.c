#include <stdio.h>
#include <limits.h>

int main(){

    int n, min = INT_MAX;

    printf("Введите число n:");
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for(int i = 0; i < n; i++) {
        if (arr[i] < min){
            min = arr[i];
        }
    }
printf("Минимальное число: %d ", min);

return 0;
    
}