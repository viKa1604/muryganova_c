#include <stdio.h>

struct Rectangle {
    double width;
    double height;
};

double calculate_area(struct Rectangle rect) {
    return rect.width * rect.height;
}

double calculate_perimeter(struct Rectangle rect) {
    return 2 * (rect.width + rect.height);
}

double calculate_area_pointer(struct Rectangle *rect) {
    return rect->width * rect->height;
}

double calculate_perimeter_pointer(struct Rectangle *rect) {
    return 2 * (rect->width + rect->height);
}

int main() {
    struct Rectangle rect = {10, 5};
    
    printf("Площадь: %.2f\n", calculate_area(rect));
    printf("Периметр: %.2f\n", calculate_perimeter(rect));
    printf("Площадь (по указателю): %.2f\n", calculate_area_pointer(&rect));
    printf("Периметр (по указателю): %.2f\n", calculate_perimeter_pointer(&rect));
    
    return 0;
}