#include <stdio.h>
#include <string.h>

struct Student {
    char name[100];
    int age;
    float average_score;
};

int main() {
    struct Student student1;
    strcpy(student1.name, "Елизавета Леонова");
    student1.age = 16;
    student1.average_score = 4.5;
    
    printf("Студент 1\n");
    printf("Имя: %s\n", student1.name);
    printf("Возраст: %d\n", student1.age);
    printf("Средний балл: %.2f\n\n", student1.average_score);
    
    struct Student student2;
    
    printf("Введите данные студента\n");
    printf("Имя: ");
    scanf("%s", student2.name);
    printf("Возраст: ");
    scanf("%d", &student2.age);
    printf("Средний балл: ");
    scanf("%f", &student2.average_score);
    
    printf("Студент 2\n");
    printf("Имя: %s\n", student2.name);
    printf("Возраст: %d\n", student2.age);
    printf("Средний балл: %.2f\n", student2.average_score);
    
    return 0;
}