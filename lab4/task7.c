#include <stdio.h>

typedef struct {
    char name[50];
    int age;
} Person;

int main() {
    Person p1 = {"Alice", 25};
    FILE *file = fopen("person.bin", "wb");
    if (file == NULL) return 1;
    fwrite(&p1, sizeof(Person), 1, file);
    fclose(file);

    Person p2;
    file = fopen("person.bin", "rb");
    if (file == NULL) return 1;
    fread(&p2, sizeof(Person), 1, file);
    fclose(file);

    printf("Name: %s, Age: %d\n", p2.name, p2.age);
    return 0;
}