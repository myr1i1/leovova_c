#include <stdio.h>

int main() {
    int n, num, sum = 0;
    printf("How many numbers? ");
    scanf("%d", &n);
    
    for (int i = 0; i < n; i++) {
        printf("Enter number: ");
        scanf("%d", &num);
        if (num < 0) {
            sum += num;
        }
    }
    
    printf("Sum of negative numbers: %d\n", sum);
    return 0;
}