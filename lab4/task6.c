#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    FILE *file = fopen("data.bin", "wb");
    if (file == NULL) return 1;
    fwrite(arr, sizeof(int), 5, file);
    fclose(file);

    int new_arr[5];
    file = fopen("data.bin", "rb");
    if (file == NULL) return 1;
    fread(new_arr, sizeof(int), 5, file);
    fclose(file);

    for (int i = 0; i < 5; i++)
        printf("%d ", new_arr[i]);
    return 0;
}