#include <stdio.h>

int main()
{
    FILE *fp;
    char str[200];

    printf("Введите строку: ");
    fgets(str, 200, stdin);

    fp = fopen("file.txt", "w");
    if(fp == NULL)
    {
        printf("Ошибка\n");
        return 1;
    }

    fputs(str, fp);
    fclose(fp);

    fp = fopen("file.txt", "r");
    if(fp == NULL)
    {
        printf("Ошибка\n");
        return 1;
    }

    char buf[200];
    fgets(buf, 200, fp);
    printf("v faile: %s", buf);

    fclose(fp);
    return 0;
}