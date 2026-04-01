#include <stdio.h>
#include <string.h>

enum Course {
    FIRST = 1,
    SECOND = 2,
    THIRD = 3,
    FOURTH = 4
};

struct Student {
    char name[100];
    int age;
    enum Course course;
    float average_score;
};


struct Student students[100];
int student_count = 0;

void add_student() {
    struct Student new_student;
    
    printf("Введите имя: ");
    scanf("%s", new_student.name);
    printf("Введите возраст: ");
    scanf("%d", &new_student.age);
    
    int course;
    printf("Введите курс (1-4): ");
    scanf("%d", &course);
    new_student.course = (enum Course)course;
    
    printf("Введите средний балл: ");
    scanf("%f", &new_student.average_score);
    
    students[student_count] = new_student;
    student_count++;
    
    printf("Студент добавлен!\n\n");
}

void print_students() {
    if(student_count == 0) {
        printf("Список студентов пуст.\n\n");
        return;
    }
    
    printf("Список студентов\n");
    for(int i = 0; i < student_count; i++) {
        printf("%d. %s, %d лет, %d курс, балл: %.2f\n",
               i+1, students[i].name, students[i].age,
               students[i].course, students[i].average_score);
    }
    printf("\n");
}

void search_by_name() {
    char name[100];
    printf("Введите имя для поиска: ");
    scanf("%s", name);
    
    int found = 0;
    for(int i = 0; i < student_count; i++) {
        if(strcmp(students[i].name, name) == 0) {
            printf("Найден: %s, %d лет, %d курс, балл: %.2f\n",
                   students[i].name, students[i].age,
                   students[i].course, students[i].average_score);
            found = 1;
        }
    }
    
    if(!found) {
        printf("Студент с именем %s не найден.\n", name);
    }
    printf("\n");
}

void sort_by_score() {
    struct Student temp;
    
    for(int i = 0; i < student_count - 1; i++) {
        for(int j = 0; j < student_count - i - 1; j++) {
            if(students[j].average_score < students[j+1].average_score) {
                temp = students[j];
                students[j] = students[j+1];
                students[j+1] = temp;
            }
        }
    }
    
    printf("Сортировка выполнена!\n\n");
    print_students();
}

int main() {
    int choice;
    
    do {
        printf("Меню\n");
        printf("1. Добавить студента\n");
        printf("2. Вывести всех студентов\n");
        printf("3. Поиск по имени\n");
        printf("4. Сортировка по баллу\n");
        printf("0. Выход\n");
        printf("Выберите действие: ");
        scanf("%d", &choice);
        
        switch(choice) {
            case 1: add_student(); break;
            case 2: print_students(); break;
            case 3: search_by_name(); break;
            case 4: sort_by_score(); break;
            case 0: printf("До свидания!\n"); break;
            default: printf("Неверный выбор!\n\n");
        }
    } while(choice != 0);
    
    return 0;
}