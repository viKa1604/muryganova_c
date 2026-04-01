#include <stdio.h>
#include <stdlib.h>

int find_max(int *arr, int n) {
    int max = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

int find_min(int *arr, int n) {
    int min = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    return min;
}

int find_sum(int *arr, int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    return sum;
}

int main() {
    int n;
    printf("Введите размер массива: ");
    scanf("%d", &n);
    
    int *arr = malloc(n * sizeof(int));
    
    for (int i = 0; i < n; i++) {
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }
    
    printf("Максимальный элемент: %d\n", find_max(arr, n));
    printf("Минимальный элемент: %d\n", find_min(arr, n));
    printf("Сумма элементов: %d\n", find_sum(arr, n));
    
    free(arr);
    return 0;
}