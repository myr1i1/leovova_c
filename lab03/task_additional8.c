#include <stdio.h>
#include <stdlib.h>

void add(int **a, int *s)
{
    int v;
    printf("Число: ");
    scanf("%d", &v);
    (*s)++;
    int *t = (int*)realloc(*a, (*s) * sizeof(int));
    if(t != NULL)
    {
        *a = t;
        (*a)[(*s)-1] = v;
    }
    else
    {
        printf("fail\n");
        (*s)--;
    }
}

void del(int **a, int *s)
{
    if(*s == 0)
    {
        printf("Пусто\n");
        return;
    }
    int idx;
    printf("Индекс (0-%d): ", *s-1);
    scanf("%d", &idx);
    if(idx < 0 || idx >= *s)
    {
        printf("bad\n");
        return;
    }
    for(int i = idx; i < *s-1; i++) (*a)[i] = (*a)[i+1];
    (*s)--;
    int *t = (int*)realloc(*a, (*s) * sizeof(int));
    if(t != NULL || *s == 0) *a = t;
}

void show(int **a, int *s)
{
    if(*s == 0) 
    { 
        printf("Пусто\n"); 
        return;
    }
    for(int i = 0; i < *s; i++) printf("%d ", (*a)[i]);
    printf("\n");
}

void resize(int **a, int *s)
{
    printf("Новый размер: ");
    scanf("%d", s);
    int *t = (int*)realloc(*a, (*s) * sizeof(int));
    if(t != NULL || *s == 0) *a = t;
    else printf("error\n");
}

int main()
{
    int *data = NULL;
    int size = 0;
    int choice;

    void (*act[5])(int**, int*) = {NULL, add, del, show, resize};

    while(1)
    {
        printf("\n1.add 2.del 3.show 4.resize 0.exit\n-> ");
        scanf("%d", &choice);
        if(choice == 0) break;
        if(choice >= 1 && choice <= 4) act[choice](&data, &size);
        else printf("wrong\n");
    }

    free(data);
    return 0;
}