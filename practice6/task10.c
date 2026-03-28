#include <stdio.h>

int count_digits(int n) {
    int t = n, count = 0;
    while(t > 0){
        count++;
        t /= 10;
    }
    return count; 
    }


int main() {
    int n;
    scanf("%d", &n);
    printf("Количество цифр --> %d\n", count_digits(n));
    return 0;
}