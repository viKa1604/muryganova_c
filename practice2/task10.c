#include <stdio.h>

int main(){
    int n, mult = 1;

    scanf("%d", &n);

     for(int i = 1; i <= n; i += 1){
        if (i % 3 == 0) {
            mult *= i;
        }
     }
     printf("%d", mult);
return 0;
}