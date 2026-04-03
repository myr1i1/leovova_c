#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *mas;
    int size = 4;
    int idx, val;

    mas = (int*)malloc(size * sizeof(int));
    if(mas == NULL) return 1;

    for(int i = 0; i < size; i++)
    {
        mas[i] = i * 3;
    }

    for(int i = 0; i < size; i++) printf("%d ", mas[i]);
    printf("\n");

    printf("куда вставить' (0-%d): ", size);
    scanf("%d", &idx);
    printf("что вставить: ");
    scanf("%d", &val);

    if(idx < 0 || idx > size)
    {
        printf("неверно\n");
        free(mas);
        return 1;
    }

    size++;
    int *tmp = (int*)realloc(mas, size * sizeof(int));
    if(tmp == NULL)
    {
        printf("нет памяти\n");
        free(mas);
        return 1;
    }
    mas = tmp;

    for(int i = size - 1; i > idx; i--)
    {
        mas[i] = mas[i - 1];
    }
    mas[idx] = val;

    for(int i = 0; i < size; i++) printf("%d ", mas[i]);
    printf("\n");

    free(mas);
    return 0;
}