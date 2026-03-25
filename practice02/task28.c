#include <stdio.h>

int main() {
    int n;
    printf("Enter N: ");
    scanf("%d", &n);
    
    for (int i = 1; i <= n; i++) {
        int num = i, has_three = 0;
        while (num > 0) {
            if (num % 10 == 3) {
                has_three = 1;
                break;
            }
            num /= 10;
        }
        if (!has_three) {
            printf("%d ", i);
        }
    }
    printf("\n");
    
    return 0;
}