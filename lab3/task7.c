#include <stdio.h>
#include <stdlib.h>

struct Student {
    char name[50];
    int age;
};

int main() {
    int n;
    printf("Введите количество студентов: ");
    scanf("%d", &n);
    
    struct Student *students = malloc(n * sizeof(struct Student));
    
    for (int i = 0; i < n; i++) {
        printf("Студент %d:\n", i + 1);
        printf("  Имя: ");
        scanf("%s", students[i].name);
        printf("  Возраст: ");
        scanf("%d", &students[i].age);
    }
    
    printf("\nСписок студентов:\n");
    for (int i = 0; i < n; i++) {
        printf("%d. %s, %d лет\n", i + 1, students[i].name, students[i].age);
    }
    
    int max_age_index = 0;
    for (int i = 1; i < n; i++) {
        if (students[i].age > students[max_age_index].age) {
            max_age_index = i;
        }
    }
    
    printf("\nСамый старший студент: %s (%d лет)\n", 
           students[max_age_index].name, students[max_age_index].age);
    
    free(students);
    return 0;
}