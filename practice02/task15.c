#include <stdio.h>

int main() {
    int n, num, min_even;
    int found = 0;
    printf("How many numbers? ");
    scanf("%d", &n);
    
    for (int i = 0; i < n; i++) {
        printf("Enter number: ");
        scanf("%d", &num);
        if (num % 2 == 0) {
            if (!found || num < min_even) {
                min_even = num;
                found = 1;
            }
        }
    }
    
    if (found) {
        printf("Minimum even number: %d\n", min_even);
    } else {
        printf("No even numbers\n");
    }
    
    return 0;
}