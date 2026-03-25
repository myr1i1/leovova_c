#include <stdio.h>

int main() {
    int num, sum = 0;
    
    printf("Enter numbers (0 to stop):\n");
    scanf("%d", &num);
    
    while (num != 0) {
        if (num > 0) {
            sum += num;
        }
        scanf("%d", &num);
    }
    
    printf("Sum of positive numbers: %d\n", sum);
    return 0;
}