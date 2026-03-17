#include <stdio.h>

int main(){
    int n, a, sum = 0;

    scanf("%d", &n);

     for(int i = 1; i <= n; i += 1){
        scanf("%d", &a);
        if (a < 0) {
            sum += a;
        }
     }
     printf("%d", sum);
return 0;
}
