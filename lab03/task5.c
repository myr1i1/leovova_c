#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *arr;
    int size = 5;
    int idx;

    arr = (int*)malloc(size * sizeof(int));
    if(arr == NULL) return 1;

    for(int i = 0; i < size; i++)
    {
        arr[i] = (i + 1) * 10;
    }

    for(int i = 0; i < size; i++) printf("%d ", arr[i]);
    printf("\n");

    printf("Индекс для удаления (0-4): ");
    scanf("%d", &idx);

    if(idx < 0 || idx >= size)
    {
        printf("Плохой индекс\n");
        free(arr);
        return 1;
    }

    for(int i = idx; i < size - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
    size--;

    int *tmp = (int*)realloc(arr, size * sizeof(int));
    if(tmp != NULL || size == 0)
    {
        arr = tmp;
    }

    for(int i = 0; i < size; i++) printf("%d ", arr[i]);
    printf("\n");

    free(arr);
    return 0;
}
