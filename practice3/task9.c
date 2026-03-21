#include <stdio.h>

int main(){

    int n, flag = 0;

    printf("Введите число n:");
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]){
            flag = 1;
            break;
        }
    }
    if (!flag) {
        printf("YES");
    } else {
        printf("NO");
    }

return 0;
    
}