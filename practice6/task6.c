#include <stdio.h>

int max3(int a, int b, int c) {
    if (a > b && a > c) {
        return a;
    } else if (b > a && b > c){
        return b;
    } else{
        return c;
    }
}

int main() {
    int n1, n2, n3;
    scanf("%d", &n1);
    scanf("%d", &n2);
    scanf("%d", &n3);
    int result = max3(n1, n2, n3);
    printf("Максимум --> %d\n", result);
    return 0;
}