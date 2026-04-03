#include <stdio.h>

int main()
{
    FILE *fp;
    fp = fopen("file.txt", "w+");
    if(fp == NULL)
    {
        printf("Ошибка\n");
        return 1;
    }

    fprintf(fp, "ABCDEFGHIJ");
    fseek(fp, 3, SEEK_SET);

    int c = getc(fp);
    printf("Символ на позиции 3: %c\n", c);

    fclose(fp);
    return 0;
}