#include <stdio.h>

int cross(int arr_1[], int arr_2[], int cros[]) {
    int k = 0;
    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 5; j++) {
            if(arr_1[i] == arr_2[j]) {
                int already_exists = 0;
                for(int m = 0; m < k; m++) {
                    if(cros[m] == arr_1[i]) {
                        already_exists = 1;
                        break;
                    }
                }
                if(!already_exists) {
                    cros[k++] = arr_1[i];
                }
            }
        }
    }
    return k;
}

int main() {
    int arr_1[5] = {1, 2, 4, 6, 7};
    int arr_2[5] = {2, 6, 3, 9, 8};
    int cros[10];
    
    int count = cross(arr_1, arr_2, cros);
    
    printf("Пересечение массивов: ");
    for(int i = 0; i < count; i++) {
        printf("%d ", cros[i]);
    }
    
    return 0;
}