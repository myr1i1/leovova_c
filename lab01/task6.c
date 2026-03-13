#include <stdio.h>

int main() {
    int a = 5, b = 2;
    
    // Деление целых
    printf("a / b (целочисленно) = %d\n", a / b);
    
    // Деление с преобразованием
    printf("a / b (с преобразованием) = %.1f\n", (float)a / b);
    
    return 0;
}
