#include <stdio.h>

int main() {
    int n;
    printf("Enter N: ");
    scanf("%d", &n);
    
    for (int i = n; i >= 1; i--) {
        if (i % 4 == 0) {
            continue;
        }
        printf("%d ", i);
    }
    
    return 0;
}