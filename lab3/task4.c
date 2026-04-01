#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, m;
    printf("Введите размер массива: ");
    scanf("%d", &n);
    
    int *arr = malloc(n * sizeof(int));
    
    for (int i = 0; i < n; i++) {
        arr[i] = i + 1;
    }
    
    printf("Исходный массив: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    printf("Введите новый размер: ");
    scanf("%d", &m);
    
    arr = realloc(arr, m * sizeof(int));
    
    for (int i = n; i < m; i++) {
        arr[i] = (i + 1);
    }
    
    printf("Измененный массив: ");
    for (int i = 0; i < m; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    free(arr);
    return 0;
}