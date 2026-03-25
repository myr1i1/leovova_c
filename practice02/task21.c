#include <stdio.h>

int main() {
    int n, fact = 1;
    printf("Enter a number: ");
    scanf("%d", &n);
    
    for (int i = 1; i <= n; i += 2) {
        fact *= i;
    }
    
    printf("Product of odd numbers up to %d: %d\n", n, fact);
    return 0;
}