#include <stdio.h>

int is_even(int x) {
    return x % 2 == 0;
}

int main() {
    int n;
    scanf("%d", &n);
    if (is_even(n)) {
        printf("%d - чётное\n", n);
    } else {
        printf("%d - нечётное\n", n);
    }
    return 0;
}