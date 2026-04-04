#include <stdio.h> // библиотека ввода-вывода
#include <stdlib.h> // библиотека для работы с памятью
#include <ctype.h> // библиотека для работы с отдельными символами.
#include <string.h> // библиотека для работы со строками

typedef struct {
    char name[100];
    int age;
    float height;
    int birth_year;
} Person;

Person *people = NULL;
int count = 0;

int valid_name(char *str) {
    for(int i = 0; str[i]; i++) {
        if(!isalpha(str[i]) && str[i] != ' ' && str[i] != '\n') {
            return 0;
        }
    }
    return 1;
}

// Функция добавления человека йоу:

void add() {
    Person d;
    getchar();
    printf("Введите имя: ");
    fgets(d.name, 100, stdin);
    d.name[strcspn(d.name, "\n")] = 0;

    if(!valid_name(d.name)) {
        printf("Ненене, имя содержит только буквы вооще-то\n");
        return;
    }
    
    printf("Введите возраст: ");
    scanf("%d", &d.age);
    if(d.age <= 0) {
        printf("Ошибка: возраст не может быть отрицательным ало\n");
        return;
    }

    printf("Введите рост: ");
    scanf("%f", &d.height);
    if(d.height <= 0) {
        printf("Ошибка: ващета рост тоже не может быть отрицательным\n");
        return;
    }

    printf("Введите год рождения: ");
    scanf("%d", &d.birth_year);
    if(d.birth_year < 1900 || d.birth_year > 2025) {
        printf("Неверный год, ты врешь\n");
        return;
    }

    people = (Person*)realloc(people, (count + 1) * sizeof(Person)); // Выбрала реаллок, потому что он выделит новую память и скопирует старые данные

    if(!people) {
        printf("Память не выделилась ой\n");
        exit(1); // авараийное завершение программы, типо не return 1, а прям жестка
    }

        people[count] = d;

        count++;

        printf("Человек добавлен ураа\n");

}
    


    // Функция вывода всех записей йоу:

    void print_all() {
        if(count == 0) {
            printf("Нет записей\n");
            return;
        }

        for(int i = 0; i < count; i++) {
            printf("%d. %s | Возраст: %d | Рост: %.2f | Год рождения: %d\n",
                i+1,
                people[i].name,
                people[i].age,
                people[i].height,
                people[i].birth_year);
        }
    }


    // Функция сравнения для сортировки по имени(для qsort) йоу:

    int compare_name(const void *a, const void *b) {
        return strcmp(((Person*)a)->name, ((Person*)b)-> name);
        // <0 еслии первая меньше, 0 еси равны, >0 если правая больше
    }

    int compare_age(const void *a, const void *b) {
        return ((Person*)a)->age - ((Person*)b)->age;
        // если age1 < age2 -> отриц число, если age1 == age2 -> 0, age1 > age2 -> положит
    }

    
    // Функция сортировки по имени йоу

    void sort_name() {
        if(count <= 1) {
            printf("Мало записей для сортировки\n");
            return;
        }

        qsort(people, count, sizeof(Person), compare_name);
        printf("Отсортировано по имени, ураа\n");
    }


    // Сортировка по возрасту, я устала писать йоу
    
    void sort_age() {
        if(count <= 1) {
            printf("Мало записей для сортировки\n");
            return;
        }
        qsort(people, count, sizeof(Person), compare_age);
        printf("Отсортировано по возрасту\n");
    }

    // Средний возраст, максимальный рост:

    void statistics() {
        if(count == 0) {
            printf("Еще нет данных\n");
            return;
        }

        int sum_age = 0;
        float max_h = people[0].height;

        for(int i = 0; i < count; i++) {
            sum_age += people[i].age;

            if(people[i].height > max_h) {
                max_h = people[i].height;
            }
        }

        printf("Средний возраст: %.2f\n", (float)sum_age / count);
        printf("Максимальный рост: %.2f\n", max_h);
    }

    // Поиск по имени:

    void search_name() {
        if(count == 0) {
            printf("Нет записей\n");
            return;
        }

        char buffer[100];
        getchar();
        printf("Введите имя для поиска: ");
        fgets(buffer, 100, stdin);
        buffer[strcspn(buffer, "\n")] = 0;

        int found = 0;

        for(int i = 0; i < count;i++) {
            if(strstr(people[i].name, buffer)) {
                printf("%s | Возраст: %d | Рост: %.2f | Год: %d\n",
                people[i].name, people[i].age, people[i].height, people[i].birth_year);

                found = 1;
            }
        }

        if(!found) printf("Не найдено\n");
    }


    // Поиск по диапазону возраста:

    void search_age_range() {
        if(count == 0) {
        printf("Нет записей\n");
        return;
    }

    int min_a, max_a;
    printf("Введите минимальный возраст: ");
    scanf("%d", &min_a);
    printf("Введите максимальный возраст: ");
    scanf("%d", &max_a);

    int found = 0;

    for(int i = 0; i < count; i++) {
        if(people[i].age >= min_a && people[i].age <= max_a) {
            printf("%s | Возраст: %d | Рост: %.2f | Год: %d\n",
                   people[i].name, people[i].age, people[i].height, people[i].birth_year);
            found = 1;
        }
    }

    if(!found) printf("Не найдено\n");

}


    // Сохранение в бинарный файл:

    void save_bin() {
        FILE *fp = fopen("people.dat", "wb");

        if(!fp) {
            printf("Ошибка сохранения\n");
            return;
        }

        fwrite(&count, sizeof(int), 1, fp);

        fwrite(people, sizeof(Person), count, fp);

        fclose(fp);
        printf("Сохранено %d записей\n", count);
    }


    // Загрузка из бинарного фйла:

    void load_bin() {
        FILE *fp = fopen("people.dat", "rb");

        if(!fp) {
            printf("Файл не найден\n");
            return;
        }

        int new_count;
        fread(&new_count, sizeof(int), 1, fp);

        Person *new_people = (Person*)malloc(new_count * sizeof(Person));

        if(!new_people) {
        printf("Ошибка памяти\n");
        fclose(fp);
        return;
        }

        fread(new_people, sizeof(Person), new_count, fp);
        fclose(fp);

        free(people);

        people = new_people;
        count = new_count;

        printf("Загружено %d записей\n", count);
    }


    // НАКОНЕЦ ТО МЭИН

    int main() {
        void (*menu[])(void) = {
        NULL,
        add,
        print_all,
        sort_name,
        sort_age,     
        statistics,     
        search_name,
        search_age_range,
        save_bin,  
        load_bin
    };

    int choice;

    while(1) {
        printf("МЕНЕДЖЕР ПЕРСОНАЛЬНЫХ ДАННЫХ\n");
        printf("1. Добавить\n2. Вывести всех\n3. Сортировка по имени\n");
        printf("4. Сортировка по возрасту\n5. Статистика\n6. Поиск по имени\n");
        printf("7. Поиск по диапазону возраста\n8. Сохранить\n9. Загрузить\n");
        printf("0. Выход\nВыбор: ");

        scanf("%d", &choice);

        if(choice == 0) {
            printf("Покааа\n");
            break;
        }

        if(choice >= 1 && choice <= 9) {
            menu[choice]();
        } else {
            printf("Неверный выбор\n");
    }
    }

    free(people);

    return 0;
    }
