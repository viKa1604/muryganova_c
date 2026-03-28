#include <stdio.h>

void res(int n) {
    for (int i = 1; i <= n; i++){
        printf("%d ", i);
    }
}

int main() {
    int n;
    scanf("%d", &n);
    res(n);
    return 0;
}