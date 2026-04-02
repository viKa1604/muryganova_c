#include <stdio.h>

typedef struct {
    char name[50];
    int age;
} Person;

int main() {
    Person people[] = {{"Alice", 25}, {"Bob", 30}};
    FILE *file = fopen("people.bin", "wb");
    if (file == NULL) return 1;
    fwrite(people, sizeof(Person), 2, file);
    fclose(file);

    Person new_people[2];
    file = fopen("people.bin", "rb");
    if (file == NULL) return 1;
    fread(new_people, sizeof(Person), 2, file);
    fclose(file);

    for (int i = 0; i < 2; i++)
        printf("%s, %d\n", new_people[i].name, new_people[i].age);
    return 0;
}