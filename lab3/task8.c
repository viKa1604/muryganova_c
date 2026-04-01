#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr = NULL;
    int size = 0;
    int choice;
    
    do {
        printf("\n========== МЕНЮ ==========\n");
        printf("1. Создать массив (malloc)\n");
        printf("2. Создать массив (calloc)\n");
        printf("3. Добавить элемент (realloc)\n");
        printf("4. Удалить элемент\n");
        printf("5. Вывести массив\n");
        printf("6. Очистить память\n");
        printf("7. Выход\n");
        printf("Выбор: ");
        scanf("%d", &choice);
        
        switch(choice) {
            case 1: {
                printf("Введите размер: ");
                scanf("%d", &size);
                arr = malloc(size * sizeof(int));

                printf("Массив создан. Заполните:\n");
                for (int i = 0; i < size; i++) {
                    printf("arr[%d] = ", i);
                    scanf("%d", &arr[i]);
                    }
                
                break;
            }
            
            case 2: {
                printf("Введите размер: ");
                scanf("%d", &size);
                arr = calloc(size, sizeof(int));
                printf("Массив создан и обнулен!\n");
                
                break;
            }
            
            case 3: {
                int new_size;
                printf("Введите новый размер: ");
                scanf("%d", &new_size);
                
                arr = realloc(arr, new_size * sizeof(int));
                
                for (int i = size; i < new_size; i++) {
                    printf("arr[%d] = ", i);
                    scanf("%d", &arr[i]);
                }
                size = new_size;
                printf("Размер изменен!\n");
                break;
            }
            
            case 4: {
                int index;
                printf("Введите индекс для удаления (0-%d): ", size - 1);
                scanf("%d", &index);
                
                if (index < 0 || index >= size) {
                    printf("Неверный индекс!\n");
                    break;
                }
                
                for (int i = index; i < size - 1; i++) {
                    arr[i] = arr[i + 1];
                }
                size--;
                
                arr = realloc(arr, size * sizeof(int));
                printf("Элемент удален!\n");
                break;
            }
            
            case 5: {
                    printf("Массив: ");
                    for (int i = 0; i < size; i++) {
                        printf("%d ", arr[i]);
                    }
                    printf("\n");
            
                break;
            }
            
            case 6: {
                if (arr != NULL) {
                    free(arr);
                    arr = NULL;
                    size = 0;
                    printf("Память освобождена!\n");
                } else {
                    printf("Массив пуст!\n");
                }
                break;
            }
            
            case 7:
                printf("До свидания!\n");
                break;
                
            default:
                printf("Неверный выбор!\n");
        }
    } while (choice != 7);
    
    return 0;
}