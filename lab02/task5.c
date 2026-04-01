#include <stdio.h>

enum Day {
    MONDAY,    
    TUESDAY,    
    WEDNESDAY,  
    THURSDAY,  
    FRIDAY,     
    SATURDAY,   
    SUNDAY      
};

struct Event {
    char name[100];
    enum Day day;
};

int main() {
    enum Day today = WEDNESDAY;

    printf("День недели\n");
    switch(today) {
        case MONDAY:
            printf("Сегодня понедельник\n");
            break;
        case TUESDAY:
            printf("Сегодня вторник\n");
            break;
        case WEDNESDAY:
            printf("Сегодня среда\n");
            break;
        case THURSDAY:
            printf("Сегодня четверг\n");
            break;
        case FRIDAY:
            printf("Сегодня пятница\n");
            break;
        case SATURDAY:
            printf("Сегодня суббота\n");
            break;
        case SUNDAY:
            printf("Сегодня воскресенье\n");
            break;
    }
    
    struct Event meeting;
    printf("Введите название события: ");
    scanf("%s", meeting.name);
    printf("Введите день недели (0-6): ");
    int day_num;
    scanf("%d", &day_num);
    meeting.day = (enum Day)day_num;
    
    printf("Событие\n");
    printf("Название: %s\n", meeting.name);
    printf("День: ");
    switch(meeting.day) {
        case MONDAY: printf("понедельник\n"); break;
        case TUESDAY: printf("вторник\n"); break;
        case WEDNESDAY: printf("среда\n"); break;
        case THURSDAY: printf("четверг\n"); break;
        case FRIDAY: printf("пятница\n"); break;
        case SATURDAY: printf("суббота\n"); break;
        case SUNDAY: printf("воскресенье\n"); break;
    }
    
    return 0;
}