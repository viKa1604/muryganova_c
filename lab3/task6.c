#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, pos, value;
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
    
    printf("Введите позицию для вставки: ");
    scanf("%d", &pos);
    printf("Введите значение: ");
    scanf("%d", &value);
    
    n++;
    arr = realloc(arr, n * sizeof(int));
    
    for (int i = n - 1; i > pos; i--) {
        arr[i] = arr[i - 1];
    }
    
    arr[pos] = value;
    
    printf("После вставки: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    free(arr);
    return 0;
}