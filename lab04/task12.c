#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Person {
    char name[50];
    int age;
};

int main()
{
    struct Person p;
    FILE *fp;
    int choice;

    while(1)
    {
        printf("1. добавить\n2. вывести значение\n0. выход\n-> ");
        scanf("%d", &choice);
        getchar();

        if(choice == 0) break;

        if(choice == 1)
        {
            printf("имя: ");
            fgets(p.name, 50, stdin);
            p.name[strcspn(p.name, "\n")] = 0;

            printf("возаст: ");
            scanf("%d", &p.age);
            getchar();

            fp = fopen("people.bin", "ab");
            if(fp == NULL)
            {
                printf("Ошибка\n");
                continue;
            }

            fwrite(&p, sizeof(struct Person), 1, fp);
            fclose(fp);
            printf("Записано\n");
        }
        else if(choice == 2)
        {
            fp = fopen("people.bin", "rb");
            if(fp == NULL)
            {
                printf("Нет записей\n");
                continue;
            }

            printf("Список:\n");
            while(fread(&p, sizeof(struct Person), 1, fp) == 1)
            {
                printf("%s, %d let\n", p.name, p.age);
            }
            fclose(fp);
        }
        else
        {
            printf("Не верно\n");
        }
    }

    return 0;
}