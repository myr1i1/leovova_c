#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *d;
    int size = 4;
    
    d = (int*)malloc(size * sizeof(int));
    if(d == NULL) return 1;

    d[0] = 10;
    d[1] = 20;
    d[2] = 30;
    d[3] = 40;

    for(int i = 0; i < size; i++) printf("%d ", d[i]);
    printf("\n");

    int new_size1 = 7;
    int *t1 = (int*)realloc(d, new_size1 * sizeof(int));
    if(t1 != NULL)
    {
        d = t1;
        for(int i = size; i < new_size1; i++)
        {
            d[i] = i * 2;
        }
        size = new_size1;
    }

    for(int i = 0; i < size; i++) printf("%d ", d[i]);
    printf("\n");

    int new_size2 = 3;
    int *t2 = (int*)realloc(d, new_size2 * sizeof(int));
    if(t2 != NULL)
    {
        d = t2;
        size = new_size2;
    }

    for(int i = 0; i < size; i++) printf("%d ", d[i]);
    printf("\n");

    free(d);
    return 0;
}