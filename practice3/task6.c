#include <stdio.h>

int main(){

    int n;

    printf("Введите число n:");
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for(int i = 0; i < n; i++) {
        if (arr[i] < 0){
            arr[i] = 0;
        }
    }
    printf("Получившийся массив: \n");
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

return 0;
    
}