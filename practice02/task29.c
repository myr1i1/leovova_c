#include <stdio.h>

int main() {
    int n, num, max_div5 = 0;
    int found = 0;
    printf("How many numbers? ");
    scanf("%d", &n);
    
    for (int i = 0; i < n; i++) {
        printf("Enter number: ");
        scanf("%d", &num);
        if (num % 5 == 0 && (!found || num > max_div5)) {
            max_div5 = num;
            found = 1;
        }
    }
    
    if (found) {
        printf("Maximum divisible by 5: %d\n", max_div5);
    } else {
        printf("No numbers divisible by 5\n");
    }
    
    return 0;
}