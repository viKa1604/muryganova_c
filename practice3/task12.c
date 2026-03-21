#include <stdio.h>

int main(){

    int n, flag;

    printf("Введите число n:");
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Индексы отрицательных чисел в массиве:\n");
    for(int i = 0; i < n; i++) {
        if (arr[i] < 0){
            flag = 1;
            printf("%d\n", i);           
        }
    }
    if (!flag) {
        printf("-1");
    }

return 0;
    
}