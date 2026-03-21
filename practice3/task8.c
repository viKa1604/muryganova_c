#include <stdio.h>

int main(){

    int n, flag = 0;

    printf("Введите число n:");
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for(int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0){
            flag = 1;
            break;
        }
    }
    if (!flag) {
        printf("NO");
    }
    else {
        printf("YES");
    }
return 0;
    
}