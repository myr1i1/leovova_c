#include <stdio.h>

int main() {
    int a, b, c;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    
    if (a + b == c) {
        printf("Сумма первых двух равна третьему\n");
    } else {
        printf("Сумма первых двух не равна третьему\n");
    }
    
    return 0;
}