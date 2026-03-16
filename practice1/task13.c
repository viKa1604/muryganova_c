#include <stdio.h>

int main() {

    int score;
    
    printf("Введите количество баллов (от 0 до 100): ");
    scanf("%d", &score);
    
    printf("Оценка: ");
    
    if (score >= 90) {
        printf("Отлично\n");
    } else if (score >= 75) {
        printf("Хорошо\n");
    } else if (score >= 60) {
        printf("Удовлетворительно\n");
    } else {
        printf("Неудовлетворительно\n");
    }
    
    return 0;
}