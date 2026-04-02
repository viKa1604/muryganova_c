#include <stdio.h>

struct Person {
    char name[50];
    int age;
};

int main() {
    struct Person p;
    printf("Enter name: ");
    int i = 0;
    char c;
    while (i < 49 && (c = getchar()) != '\n' && c != EOF) {
        p.name[i] = c;
        i++;
    }
    p.name[i] = '\0';

    printf("Enter age: ");
    scanf("%d", &p.age);

    FILE *file = fopen("db.bin", "ab");
    if (file == NULL) return 1;
    fwrite(&p, sizeof(struct Person), 1, file);
    fclose(file);

    printf("\nAll records:\n");
    file = fopen("db.bin", "rb");
    if (file == NULL) return 1;
    struct Person temp;
    while (fread(&temp, sizeof(struct Person), 1, file) == 1) {
        printf("Name: %s, Age: %d\n", temp.name, temp.age);
    }
    fclose(file);
    return 0;
}