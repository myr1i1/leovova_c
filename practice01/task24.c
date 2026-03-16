#include <stdio.h>

int main() {
    int a, b, c;
    printf("Enter a, b, c: ");
    scanf("%d %d %d", &a, &b, &c);
    
    float result = ((a + b) * c) / 2.0;
    printf("((%d + %d) * %d) / 2 = %.2f\n", a, b, c, result);
    
    return 0;
}