#include <stdio.h>

int main(){
    int n;

    scanf("%d", &n);

     for(int i = 0; i <= n; i += 1){
        if (i % 3 == 0) {
            printf("Fizz\n");
        } else {
            printf("%d\n", i);
        }
     }
return 0;
}