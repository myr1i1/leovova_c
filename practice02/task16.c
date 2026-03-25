#include <stdio.h>

int main() {
    int num, count = 0;
    
    printf("Enter numbers (0 to stop):\n");
    scanf("%d", &num);
    
    while (num != 0) {
        count++;
        scanf("%d", &num);
    }
    
    printf("Numbers entered (excluding 0): %d\n", count);
    return 0;
}