#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, index;
    printf("Введите размер массива: ");
    scanf("%d", &n);
    
    int *arr = malloc(n * sizeof(int));
    
    for (int i = 0; i < n; i++) {
        arr[i] = i;
    }
    
    printf("Исходный массив: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    printf("Введите индекс для удаления: ");
    scanf("%d", &index);
    
    for (int i = index; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    
    n--;
    
    arr = realloc(arr, n * sizeof(int));
    
    printf("После удаления: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    free(arr);
    return 0;
}