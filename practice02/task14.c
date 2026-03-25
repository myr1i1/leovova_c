#include <stdio.h>

int main() {
    int n, num, max;
    printf("How many numbers? ");
    scanf("%d", &n);
    
    printf("Enter number 1: ");
    scanf("%d", &max);
    
    for (int i = 2; i <= n; i++) {
        printf("Enter number %d: ", i);
        scanf("%d", &num);
        if (num > max) {
            max = num;
        }
    }
    
    printf("Maximum: %d\n", max);
    return 0;
}