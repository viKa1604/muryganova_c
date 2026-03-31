#include <stdio.h>

enum Day {
    MONDAY,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY,
    SATURDAY,
    SUNDAY
};

struct Event {
    enum Day day;
    char description[50];
};

void printDay(enum Day d) {
    switch(d) {
        case MONDAY:
            printf("Понедельник\n");
            break;
        case TUESDAY:
            printf("Вторник\n");
            break;
        case WEDNESDAY:
            printf("Среда\n");
            break;
        case THURSDAY:
            printf("Четверг\n");
            break;
        case FRIDAY:
            printf("Пятница\n");
            break;
        case SATURDAY:
            printf("Суббота\n");
            break;
        case SUNDAY:
            printf("Воскресенье\n");
            break;
    }
}

int main() {
    enum Day today = WEDNESDAY;
    
    printf("Сегодня: ");
    printDay(today);
    
    return 0;
}