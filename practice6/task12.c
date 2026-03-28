#include <stdio.h>

int sum_array(int arr[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++){
        sum += arr[i];
        
    }
    return sum;
}

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    printf("Сумма --> %d\n", sum_array(arr, n));
    return 0;
}