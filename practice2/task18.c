#include <stdio.h>

int main(){
    int n, a, schet = 0;

    scanf("%d", &n);

     for(int i = 1; i <= n; i += 1){
        scanf("%d", &a);
        if (a % 7 == 0) {
            schet += 1;
        }
     }
     printf("%d", schet);
return 0;
}
