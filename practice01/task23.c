#include <stdio.h>

int main() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    
    if (a > b) {
        printf("%d больше %d\n", a, b);
    } else if (a < b) {
        printf("%d меньше %d\n", a, b);
    } else {
        printf("Числа равны\n");
    }
    
    return 0;
}