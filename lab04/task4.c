#include <stdio.h>

int main()
{
    FILE *fp;
    fp = fopen("file.txt", "w");

    if(fp == NULL)
    {
        printf("Ошибка\n");
        return 1;
    }

    int a = 12;
    float b = 3.14;
    char name[] = "Котяра";

    fprintf(fp, "число - %d, дробь - %f, имя - %s\n", a, b, name);

    fclose(fp);

    fp = fopen("file.txt", "r");
    if(fp == NULL)
    {
        printf("Ошибка\n");
        return 1;
    }

    int x;
    float y;
    char word[50];

    fscanf(fp, "число - %d, дробь - %f, имя - %s", &x, &y, word);
    printf("считали: %d, %f, %s\n", x, y, word);

    fclose(fp);
    return 0;
}