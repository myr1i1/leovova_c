#include <stdio.h>
#include <string.h>

struct Person {
    char name[50];
    int age;
};

int main()
{
    struct Person p1;
    strcpy(p1.name, "Лизя");
    p1.age = 16;

    FILE *fp;
    fp = fopen("file.txt", "wb");
    if(fp == NULL)
    {
        printf("Ошибка\n");
        return 1;
    }

    fwrite(&p1, sizeof(struct Person), 1, fp);
    fclose(fp);

    struct Person p2;

    fp = fopen("file.txt", "rb");
    if(fp == NULL)
    {
        printf("ошибка\n");
        return 1;
    }

    fread(&p2, sizeof(struct Person), 1, fp);
    fclose(fp);

    printf("имя: %s, возраст: %d\n", p2.name, p2.age);
    return 0;
}