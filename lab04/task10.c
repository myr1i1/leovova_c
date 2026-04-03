#include <stdio.h>

int main()
{
    FILE *fp;
    fp = fopen("file.txt", "rb");

    if(fp == NULL)
    {
        printf("Ошибка\n");
        return 1;
    }

    fseek(fp, 0, SEEK_END);
    long size = ftell(fp);
    fclose(fp);

    printf("Размер файла: %ld байт\n", size);
    return 0;
}