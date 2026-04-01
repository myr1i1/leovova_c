#include <stdio.h>

int main() {
    int a = 5, b = 2;

    printf("a / b (целочисленно) = %d\n", a / b);
    
    printf("a / b (с преобразованием) = %.1f\n", (float)a / b);
    
    return 0;
}
