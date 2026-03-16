#include <stdio.h>

int main() {
    int x, result;
    printf("Enter x: ");
    scanf("%d", &x);
    
    if (x > 0) {
        result = x * x;
    } else if (x == 0) {
        result = 0;
    } else {
        result = -x;
    }
    
    printf("Result: %d\n", result);
    return 0;
}