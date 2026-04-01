#include <stdio.h>

int main() {
    int num;
    
    printf("Введите трехзначное число: ");
    scanf("%d", &num);
    
    if (num < 100 || num > 999) {
        printf("Ошибка: число должно быть трехзначным!\n");
        return 1;
    }
    
    
    int hundreds = num / 100;
    int tens = (num / 10) % 10;
    int ones = num % 10;
    
    printf("Сотни: %d, Десятки: %d, Единицы: %d\n", hundreds, tens, ones);
    
    return 0;
}
