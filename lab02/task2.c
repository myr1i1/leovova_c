#include <stdio.h>
#include <string.h>

struct Student {
    char name[100];
    int age;
    float average_score;
};

int main() {
    struct Student students[5];
    
    strcpy(students[0].name, "Дарья Дон");
    students[0].age = 19;
    students[0].average_score = 4.8;
    
    strcpy(students[1].name, "Анна Ионова");
    students[1].age = 20;
    students[1].average_score = 4.2;
    
    strcpy(students[2].name, "Алина Флоридова");
    students[2].age = 18;
    students[2].average_score = 4.9;
    
    strcpy(students[3].name, "Александр Чахиров");
    students[3].age = 21;
    students[3].average_score = 3.8;
    
    strcpy(students[4].name, "Красова Елизавета");
    students[4].age = 19;
    students[4].average_score = 4.5;
    
    printf("Список студентов\n");
    for(int i = 0; i < 5; i++) {
        printf("%d. %s, %d лет, балл: %.2f\n", 
               i+1, students[i].name, students[i].age, students[i].average_score);
    }
    int max_index = 0;
    for(int i = 1; i < 5; i++) {
        if(students[i].average_score > students[max_index].average_score) {
            max_index = i;
        }
    }
    
    printf("Лучший студент\n");
    printf("%s, балл: %.2f\n", students[max_index].name, students[max_index].average_score);
    
    return 0;
}