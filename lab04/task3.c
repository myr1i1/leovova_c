#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fp = fopen("file.txt", "w");

    if(fp == NULL)   {
        printf("Ошибка\n");
        return 1;
    } 

    fputs("Блаблабла\n", fp);
    fputs("Блеблебле\n", fp);
    fputs("Блублублу\n", fp);

    fclose(fp);


    fp = fopen("file.txt", "r");
    if(fp == NULL) {
        printf("Ошибка\n");
        return 1;
    }

    char lol[100];
    while(fgets(lol, 100, fp) != NULL) {
        printf("%s", lol);
    }

    fclose(fp);
    return 0;
}