#include <stdio.h>

struct Date {
    int day;
    int month;
    int year;
};

struct Person {
    char name[100];
    struct Date bitrhday_date;
};


struct Date input_date(){
    struct Date res;
    printf("input day: ");
    scanf("%d", &res.day);
    printf("input month: ");
    scanf("%d", &res.month);
    printf("input year: ");
    scanf("%d", &res.year);

    
    return res;
}

struct Person input_person(){
    struct Person res;
    printf("input name: ");
    scanf("%s", res.name);

    printf("input date of birth: ");
    res.bitrhday_date = input_date();
    
    return res;
}



void print_person(struct Person person){
    printf("Name: %s\n", person.name);
    printf("Date_of_Birth: %d.%d.%d\n", person.bitrhday_date.day, person.bitrhday_date.month, person.bitrhday_date.year);

}

int main(){
    struct Person people[5];

    for(int i = 0; i < 5; i++){
        printf("input student %d data\n", i+1);
        people[i] = input_person();
    }

    for(int i = 0; i < 5; i++){
        if (people[i].bitrhday_date.year > 2000){
            printf("---------------------\n");
            print_person(people[i]);
            printf("---------------------\n");
        }
    }

    return 0;
}