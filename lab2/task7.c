#include <stdio.h>

enum Course {
    FIRST_COURSE,
    SECOND_COURSE,
    THIRD_COURSE,
    FOURTH_COURSE
};

struct Student {
    char name[50];
    int age;
    enum Course course;
    double average_grade;
};

void copy_string(char *dest, char *src) {
    int i = 0;
    while(src[i] != '\0') {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
}

int compare_string(char *str1, char *str2) {
    int i = 0;
    while(str1[i] != '\0' && str2[i] != '\0') {
        if(str1[i] != str2[i]) {
            return 0;
        }
        i++;
    }
    return (str1[i] == '\0' && str2[i] == '\0');
}

void add_student(struct Student *students, int *count, char *name, int age, enum Course course, double grade) {
    copy_string(students[*count].name, name);
    students[*count].age = age;
    students[*count].course = course;
    students[*count].average_grade = grade;
    (*count)++;
}

void print_students(struct Student *students, int count) {
    for(int i = 0; i < count; i++) {
        printf("Имя: %s, Возраст: %d, Курс: %d, Средний балл: %.2f\n", 
               students[i].name, 
               students[i].age, 
               students[i].course + 1, 
               students[i].average_grade);
    }
}

int find_student(struct Student *students, int count, char *name) {
    for(int i = 0; i < count; i++) {
        if(compare_string(students[i].name, name)) {
            return i;
        }
    }
    return -1;
}

void sort_students_grade(struct Student *students, int count) {
    struct Student temp;
    for(int i = 0; i < count - 1; i++) {
        for(int j = i + 1; j < count; j++) {
            if(students[i].average_grade < students[j].average_grade) {
                temp = students[i];
                students[i] = students[j];
                students[j] = temp;
            }
        }
    }
}

int main() {
    struct Student students[100];
    int student_count = 0;
    
    add_student(students, &student_count, "Иванов Иван", 19, FIRST_COURSE, 4.5);
    add_student(students, &student_count, "Петров Петр", 20, SECOND_COURSE, 4.2);
    add_student(students, &student_count, "Сидорова Анна", 18, FIRST_COURSE, 4.8);
    add_student(students, &student_count, "Козлов Дмитрий", 21, THIRD_COURSE, 3.9);
    
    printf("Список студентов:\n");
    print_students(students, student_count);
    
    printf("\nПоиск студента 'Сидорова Анна':\n");
    int index = find_student(students, student_count, "Сидорова Анна");
    if(index != -1) {
        printf("Найден: %s, Возраст: %d, Курс: %d, Средний балл: %.2f\n", 
               students[index].name, 
               students[index].age, 
               students[index].course + 1, 
               students[index].average_grade);
    } else {
        printf("Студент не найден\n");
    }
    
    printf("\nСортировка по среднему баллу (по убыванию):\n");
    sort_students_grade(students, student_count);
    print_students(students, student_count);
    
    return 0;
}