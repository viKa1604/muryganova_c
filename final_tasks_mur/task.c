#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

// Структура Person
struct Person {
    char name[50];
    int age;
    float height;
    int birth_year;
};

int is_valid_name(char *name) {
    for (int i = 0; name[i] != '\0'; i++) {
        if (!isalpha(name[i])) {
            return 0;
        }
    }
    return 1;
}

// Добавление новой записи (ввод с клавиатуры)
struct Person* add_person(struct Person *people, int *total_count) {
    struct Person new_person;
    printf("Введите имя: ");
    scanf("%s", new_person.name);
    
    // Проверка ввода
    while (!is_valid_name(new_person.name)) {
        printf("Ошибка! Имя должно содержать только буквы! ");
        scanf("%s", new_person.name);
    }
    
    printf("Введите возраст: ");
    scanf("%d", &new_person.age);
    while (new_person.age <= 0) {
        printf("Ошибка! Возраст должен быть положительным! ");
        scanf("%d", &new_person.age);
    }
    
    printf("Введите рост: ");
    scanf("%f", &new_person.height);
    while (new_person.height <= 0) {
        printf("Ошибка! Рост должен быть положительным! ");
        scanf("%f", &new_person.height);
    }
    
    printf("Введите год рождения: ");
    scanf("%d", &new_person.birth_year);
    
    people = realloc(people, (*total_count + 1) * sizeof(struct Person));
    people[*total_count] = new_person;
    (*total_count)++;
    
    printf("Человек успешно добавлен!\n");
    
    return people;
}
// Функция вывода всех записей
void print_all(struct Person *people, int total_count) {
    if (total_count == 0) {
        printf("Записей не найдено.\n");
        return;
    }
    
    printf("\n----- Все люди -----\n");
    for (int i = 0; i < total_count; i++) {
        printf("%d. %s | Возраст: %d | Рост: %.2f | Год рождения: %d\n", i + 1, people[i].name, people[i].age, people[i].height, people[i].birth_year);
    }
    printf("\n");
}
// Сортировка записей (по имени)
void sort_by_name(struct Person *people, int total_count) {
    if (total_count <= 1) return;
    
    for (int i = 0; i < total_count - 1; i++) {
        for (int j = 0; j < total_count - i - 1; j++) {
            if (strcmp(people[j].name, people[j + 1].name) > 0) {
                struct Person temp = people[j];
                people[j] = people[j + 1];
                people[j + 1] = temp;
            }
        }
    }
    printf("Отсортировано по имени успешно!\n");
}
// Сортировка записей (по возрасту)
void sort_by_age(struct Person *people, int total_count) {
    if (total_count <= 1) return;
    
    for (int i = 0; i < total_count - 1; i++) {
        for (int j = 0; j < total_count - i - 1; j++) {
            if (people[j].age > people[j + 1].age) {
                struct Person temp = people[j];
                people[j] = people[j + 1];
                people[j + 1] = temp;
            }
        }
    }
    printf("Отсортировано по возрасту успешно!\n");
}
// Статистика (средний возраст и максимальный рост)
void show_statistics(struct Person *people, int total_count) {
    if (total_count == 0) {
        printf("Нет записей для статистики.\n");
        return;
    }
    
    int total_age = 0;
    float max_height = people[0].height;
    
    for (int i = 0; i < total_count; i++) {
        total_age += people[i].age;
        if (people[i].height > max_height) {
            max_height = people[i].height;
        }
    }
    
    float avg_age = (float)total_age / total_count;
    
    printf("\n----- Статистика -----\n");
    printf("Средний возраст: %.2f\n", avg_age);
    printf("Максимальный рост: %.2f\n", max_height);
    printf("Всего человек: %d\n", total_count);
}
// Поиск по имени
void search_by_name(struct Person *people, int total_count) {
    if (total_count == 0) {
        printf("Нет записей для поиска.\n");
        return;
    }
    
    char search_name[50];
    printf("Введите имя для поиска: ");
    scanf("%s", search_name);
    
    int found = 0;
    for (int i = 0; i < total_count; i++) {
        if (strcmp(people[i].name, search_name) == 0) {
            printf("Найдено: %s | Возраст: %d | Рост: %.2f | Год рождения: %d\n", people[i].name, people[i].age, people[i].height, people[i].birth_year);
            found = 1;
        }
    }
    
    if (!found) {
        printf("Человек с именем '%s' не найден.\n", search_name);
    }
}
// Поиск по диапазону роста
void search_by_age_range(struct Person *people, int total_count) {
    if (total_count == 0) {
        printf("Нет записей для поиска.\n");
        return;
    }
    
    int min_age, max_age;
    printf("Введите минимальный возраст: ");
    scanf("%d", &min_age);
    printf("Введите максимальный возраст: ");
    scanf("%d", &max_age);
    
    printf("\n----- Люди в возрасте %d-%d -----\n", min_age, max_age);
    int found = 0;
    
    for (int i = 0; i < total_count; i++) {
        if (people[i].age >= min_age && people[i].age <= max_age) {
            printf("%s | Возраст: %d | Рост: %.2f | Год рождения: %d\n", people[i].name, people[i].age, people[i].height, people[i].birth_year);
            found = 1;
        }
    }
    
    if (!found) {
        printf("Люди в этом возрастном диапазоне не найдены.\n");
    }
}
// Сохранение в бинарный файл
void save_to_file(struct Person *people, int total_count) {
    if (total_count == 0) {
        printf("Нет данных для сохранения.\n");
        return;
    }
    
    FILE *file = fopen("people.dat", "wb");
    //Проверка ошибок открытия файла
    if (file == NULL) {
        printf("Ошибка открытия файла для сохранения!\n");
        return;
    }
    
    fwrite(&total_count, sizeof(int), 1, file);
    fwrite(people, sizeof(struct Person), total_count, file);
    
    fclose(file);
    printf("Сохранено %d записей в файл people.dat\n", total_count);
}

// Загрузка из бинарного файла
struct Person* load_from_file(struct Person *people, int *total_count) {
    free(people);
    
    FILE *file = fopen("people.dat", "rb");
    //Проверка ошибок открытия файла
    if (file == NULL) {
        printf("Сохраненный файл не найден.\n");
        *total_count = 0;
        return NULL;
    }
    
    fread(total_count, sizeof(int), 1, file);
    
    people = malloc(*total_count * sizeof(struct Person));
    
    fread(people, sizeof(struct Person), *total_count, file);
    
    fclose(file);
    printf("Загружено %d записей из файла people.dat\n", *total_count);
    
    return people;
}

// Основное
int main() {
    struct Person *people = NULL;
    int total_count = 0;
    int choice;

    // Меню
    do {
        printf("\n----- МЕНЮ -----\n");
        printf("1. Добавить человека\n");
        printf("2. Вывести всех\n");
        printf("3. Сортировать по имени\n");
        printf("4. Сортировать по возрасту\n");
        printf("5. Статистика\n");
        printf("6. Поиск по имени\n");
        printf("7. Поиск по диапазону возраста\n");
        printf("8. Сохранить\n");
        printf("9. Загрузить\n");
        printf("10. Выход\n");
        printf("Выбор: ");
        scanf("%d", &choice);

        // Реализация меню (не через массив а через свич кейс)
        switch(choice) {
            case 1:
                people = add_person(people, &total_count);
                break;
            case 2:
                print_all(people, total_count);
                break;
            case 3:
                sort_by_name(people, total_count);
                break;
            case 4:
                sort_by_age(people, total_count);
                break;
            case 5:
                show_statistics(people, total_count);
                break;
            case 6:
                search_by_name(people, total_count);
                break;
            case 7:
                search_by_age_range(people, total_count);
                break;
            case 8:
                save_to_file(people, total_count);
                break;
            case 9:
                people = load_from_file(people, &total_count);
                break;
            case 10:
                printf("До свидания!\n");
                break;
            default:
                printf("Неверный выбор!\n");
        }
        
    } while (choice != 10);
    
    free(people);
    
    return 0;
}