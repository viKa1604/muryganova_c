#include <stdio.h>

int main() {
    float cels, fahren, kelv;
    
    printf("Введите температуру в градусах Цельсия: ");
    scanf("%f", &cels);
    
    fahren = (cels * 9 / 5) + 32;
    kelv = cels + 273;
    
    printf("%.2f°C = %.2f°F\n", cels, fahren);
    printf("%.2f°C = %.2fK\n", cels, kelv);
    
    return 0;
}