#include <stdio.h>

int main(){

    int n, t;

    printf("Введите число n:");
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    t = arr[n - 1];
    arr[n - 1] = arr[0];
    arr[0] = t;
    

    printf("Получившийся массив: \n");
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

return 0;
    
}