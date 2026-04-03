#include <stdio.h>

int main()
{
    FILE *fp;
    fp = fopen("file.txt", "r");

    if(fp == NULL)
    {
        printf("Ошибка\n");
        return 1;
    }

    int c;
    while(1)
    {
        c = getc(fp);
        if(feof(fp))
        {
            printf("Конец файла\n");
            break;
        }
        if(ferror(fp))
        {
            printf("Ошибка чтения\n");
            break;
        }
        printf("%c", c);
    }

    fclose(fp);
    return 0;
}