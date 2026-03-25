#include <stdio.h>

int main() {
    int n, product = 1;
    int found = 0;
    printf("Enter N: ");
    scanf("%d", &n);
    
    for (int i = 1; i <= n; i++) {
        if (i % 3 == 0) {
            product *= i;
            found = 1;
        }
    }
    
    if (found) {
        printf("Product: %d\n", product);
    } else {
        printf("No numbers divisible by 3\n");
    }
    
    return 0;
}