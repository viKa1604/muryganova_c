#include <stdio.h>

int main(){
    int n;

    scanf("%d", &n);

     for(int i = 0; i <= n; i += 1){
        if (i % 4 == 0) {
            continue;
        } 
            printf("%d\n", i);
        }
return 0;
}