#include <stdio.h>

int main() {
    int num;
    printf("Enter number: ");
    scanf("%d", &num);
    
    printf("Делится на 2: %s\n", (num % 2 == 0) ? "да" : "нет");
    printf("Делится на 3: %s\n", (num % 3 == 0) ? "да" : "нет");
    printf("Делится на 5: %s\n", (num % 5 == 0) ? "да" : "нет");
    
    return 0;
}