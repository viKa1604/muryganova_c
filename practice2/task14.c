#include <stdio.h>

int main(){
    int n, a, max = 0;

    scanf("%d", &n);


    for(int i = 1; i <= n; i += 1){
        scanf("%d", &a);
        if (a > max) {
            max = a;
            
        }
    }
    printf("%d - максимальное число", max);
    return 0;
}
