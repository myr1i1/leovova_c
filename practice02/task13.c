#include <stdio.h>

int main() {
    int n, num;
    printf("How many numbers? ");
    scanf("%d", &n);
    
    printf("Numbers > 10: ");
    for (int i = 0; i < n; i++) {
        printf("Enter number: ");
        scanf("%d", &num);
        if (num > 10) {
            printf("%d ", num);
        }
    }
    printf("\n");
    
    return 0;
}