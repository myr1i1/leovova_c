#include <stdio.h>

int main() {
    int n, num, count = 0;
    printf("How many numbers? ");
    scanf("%d", &n);
    
    for (int i = 0; i < n; i++) {
        printf("Enter number: ");
        scanf("%d", &num);
        if (num % 7 == 0) {
            count++;
        }
    }
    
    printf("Numbers divisible by 7: %d\n", count);
    return 0;
}