#include <stdio.h>

int main(void) {

    int score;
    printf("Enter score (0-100): ");
    scanf("%d", &score);
    
    if (score >= 90 && score <= 100) {
        printf("Отлично\n");
    } else if (score >= 75 && score <= 89) {
        printf("Хорошо\n");
    } else if (score >= 60 && score <= 74) {
        printf("Удовлетворительно\n");
    } else if (score >= 0 && score < 60) {
        printf("Неудовлетворительно\n");
    } else {
        printf("Некорректный ввод\n");
    }
    
    return 0;
}