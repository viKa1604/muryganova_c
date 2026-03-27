#include <stdio.h>

int max(int a, int b) {
    if (a > b) {
        return a;
    } else {
        return b;
    }
}

int main() {
    int n1, n2;
    scanf("%d", &n1);
    scanf("%d", &n2);
    int result = max(n1, n2);
    printf("Максимум --> %d\n", result);
    return 0;
}