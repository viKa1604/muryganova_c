#include <stdio.h>

int summ(int n) {
    int sum = 0;
    for (int i = 1; i <= n; i++){
        sum += i;
        
    }
return sum;
}

int main() {
    int n;
    scanf("%d", &n);
    printf("Сумма --> %d\n", summ(n));
    return 0;
}