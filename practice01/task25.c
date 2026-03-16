#include <stdio.h>

int main() {
    int a, b;
    char op;
    
    printf("Enter operation (e.g., 5 + 3): ");
    scanf("%d %c %d", &a, &op, &b);
    
    switch(op) {
        case '+':
            printf("%d + %d = %d\n", a, b, a + b);
            break;
        case '-':
            printf("%d - %d = %d\n", a, b, a - b);
            break;
        case '*':
            printf("%d * %d = %d\n", a, b, a * b);
            break;
        case '/':
            if (b != 0) {
                printf("%d / %d = %.2f\n", a, b, (float)a / b);
            } else {
                printf("Ошибка: деление на ноль\n");
            }
            break;
        default:
            printf("Неизвестная операция\n");
    }
    
    return 0;
}