#include <stdio.h>

int sum(int a, int b) {
    return a + b;
}

int main() {
    int n1, n2;
    scanf("%d", &n1);
    scanf("%d", &n2);
    int result = sum(n1, n2);
    printf("%d\n", result);
    return 0;
}