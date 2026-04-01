#include <stdio.h>

struct Rectangle {
    float width;
    float height;
};

float area_by_value(struct Rectangle rect) {
    return rect.width * rect.height;
}

float area_by_pointer(struct Rectangle *rect) {
    return rect->width * rect->height;
}

float perimeter_by_value(struct Rectangle rect) {
    return 2 * (rect.width + rect.height);
}

float perimeter_by_pointer(struct Rectangle *rect) {
    return 2 * (rect->width + rect->height);
}

int main() {
    struct Rectangle rect;
    
    printf("Введите ширину прямоугольника: ");
    scanf("%f", &rect.width);
    printf("Введите высоту прямоугольника: ");
    scanf("%f", &rect.height);
    
    printf("Результаты\n");
    printf("Площадь (по значению): %.2f\n", area_by_value(rect));
    printf("Площадь (по указателю): %.2f\n", area_by_pointer(&rect));
    printf("Периметр (по значению): %.2f\n", perimeter_by_value(rect));
    printf("Периметр (по указателю): %.2f\n", perimeter_by_pointer(&rect));
    
    return 0;
}