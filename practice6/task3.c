#include <stdio.h>

int sum(int x) {
    return x * x;
}

int main() {
    int n;
    scanf("%d", &n);
    int result = sum(n);
    printf("%d\n", result);
    return 0;
}