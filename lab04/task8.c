#include <stdio.h>
#include <string.h>

struct Person {
    char name[50];
    int age;
};

int main()
{
    struct Person people[3];
    strcpy(people[0].name, "Лизя");
    people[0].age = 19;
    strcpy(people[1].name, "Алина");
    people[1].age = 21;
    strcpy(people[2].name, "Яна");
    people[2].age = 18;

    FILE *fp;
    fp = fopen("file.bin", "wb");
    if(fp == NULL)
    {
        printf("Ошибка\n");
        return 1;
    }

    fwrite(people, sizeof(struct Person), 3, fp);
    fclose(fp);

    struct Person new_people[3];

    fp = fopen("file.bin", "rb");
    if(fp == NULL)
    {
        printf("fail\n");
        return 1;
    }

    fread(new_people, sizeof(struct Person), 3, fp);
    fclose(fp);

    for(int i = 0; i < 3; i++)
    {
        printf("%s, %d let\n", new_people[i].name, new_people[i].age);
    }

    return 0;
}