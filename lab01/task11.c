#include <stdio.h>

int main() {
    int num;
    
    printf("Введите целое число: ");
    scanf("%d", &num);
    
    int last_digit = num % 10;
    if (last_digit < 0) last_digit = -last_digit;
    
    printf("Последняя цифра: %d\n", last_digit);
    
    return 0;
}
