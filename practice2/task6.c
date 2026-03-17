#include <stdio.h>

int main(){
    int n, schet = 0;

    scanf("%d", &n);

     for(int i = 1; i <= n; i += 1){
        if (i % 2 == 0) {
            schet += 1;
        }
     }
     printf("%d", schet);
return 0;
}