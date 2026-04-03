#include <stdio.h>
#include <stdlib.h>

void show(int *a, int size)
{
    if(size == 0)
    {
        printf("пусто\n");
        return;
    }
    for(int i = 0; i < size; i++) printf("%d ", a[i]);
    printf("\n");
}

int main()
{
    int *data = NULL;
    int size = 0;
    int choice, val, idx;

    while(1)
    {
        printf("1.добавить 2.удалить 3.ввести 4. изменить размер 0.exit\n");
        printf("-> ");
        scanf("%d", &choice);

        if(choice == 0) break;

        if(choice == 1)
        {
            printf("число: ");
            scanf("%d", &val);
            size++;
            int *tmp = (int*)realloc(data, size * sizeof(int));
            if(tmp != NULL)
            {
                data = tmp;
                data[size-1] = val;
            }
            else
            {
                printf("ошибка\n");
                size--;
            }
        }
        else if(choice == 2)
        {
            if(size == 0)
            {
                printf("нечего удалять\n");
                continue;
            }
            printf("индекс (0-%d): ", size-1);
            scanf("%d", &idx);
            if(idx < 0 || idx >= size)
            {
                printf("плохо\n");
                continue;
            }
            for(int i = idx; i < size-1; i++)
            {
                data[i] = data[i+1];
            }
            size--;
            int *tmp = (int*)realloc(data, size * sizeof(int));
            if(tmp != NULL || size == 0) data = tmp;
        }
        else if(choice == 3)
        {
            show(data, size);
        }
        else if(choice == 4)
        {
            printf("новый размер: ");
            scanf("%d", &size);
            int *tmp = (int*)realloc(data, size * sizeof(int));
            if(tmp != NULL || size == 0) data = tmp;
            else printf("ошибка\n");
        }
        else
        {
            printf("нет такого\n");
        }
    }

    free(data);
    return 0;
}