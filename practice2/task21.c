#include <stdio.h>

int main(){
    int n, fac = 1;

    scanf("%d", &n);

     for(int i = 1; i <= n; i += 1){
        if (i % 2 != 0) {
            fac *= i;
        }
     }
     printf("%d", fac);
return 0;
}
