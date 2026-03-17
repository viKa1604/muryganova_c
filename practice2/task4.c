#include <stdio.h>

int main(){
    int n, sum = 0;

    scanf("%d", &n);

     for(int i = 0; i <= n; i += 1){
        if (i % 5 == 0) {
            sum += i;
        }
     }
     printf("%d", sum);
return 0;
}