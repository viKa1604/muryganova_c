#include <stdio.h>

int main(){
     int a, count = 0;
     scanf("%d", &a);
     while (a != 0) {
        count++;
        scanf("%d", &a);
    }
printf("%d", count);
return 0;
}