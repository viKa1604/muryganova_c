#include <stdio.h>

int main(){
    int n, a;

    scanf("%d", &n);

     for(int i = 1; i <= n; i += 1){
        scanf("%d", &a);
        if (a > 10) {
            printf("%d больше 10\n", a);
        }
     }
    
return 0;
}
