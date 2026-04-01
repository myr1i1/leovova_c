#include <stdio.h>
#include <string.h>

struct Date {
    int day;
    int month;
    int year;
};

struct Person {
    char name[50];
    struct Date birth_date;
};

int main() {
    struct Person person1;
    
    strcpy(person1.name, "Роланд Мелконян");
    person1.birth_date.day = 15;
    person1.birth_date.month = 5;
    person1.birth_date.year = 2001;
    
    printf("Данные человека\n");
    printf("Имя: %s\n", person1.name);
    printf("Дата рождения: %02d.%02d.%d\n", 
           person1.birth_date.day, 
           person1.birth_date.month, 
           person1.birth_date.year);
    
    struct Person persons[3];
    
    strcpy(persons[0].name, "Арсений");
    persons[0].birth_date = (struct Date){10, 5, 1998};
    
    strcpy(persons[1].name, "Антон");
    persons[1].birth_date = (struct Date){22, 8, 2002};
    
    strcpy(persons[2].name, "Вика");
    persons[2].birth_date = (struct Date){3, 12, 2005};
    
    printf("Родившиеся после 2000 года\n");
    for(int i = 0; i < 3; i++) {
        if(persons[i].birth_date.year > 2000) {
            printf("%s - %02d.%02d.%d\n", 
                   persons[i].name,
                   persons[i].birth_date.day,
                   persons[i].birth_date.month,
                   persons[i].birth_date.year);
        }
    }
    
    return 0;
}