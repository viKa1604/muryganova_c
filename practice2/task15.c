#include <stdio.h>
#include <limits.h>

int main(){
    int n, a, min = INT_MAX;

    scanf("%d", &n);


    for(int i = 1; i <= n; i += 1){
        scanf("%d", &a);
        if (a < min && a % 2 == 0) {
            min = a;
            
        }
    }
    printf("%d - минимальное чётное число", min);
    return 0;
}