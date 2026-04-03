#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    int n = 5;
    FILE *fp;

    fp = fopen("file.bin", "wb");
    if(fp == NULL)
    {
        printf("ошибка\n");
        return 1;
    }

    fwrite(arr, sizeof(int), n, fp);
    fclose(fp);

    int *new_arr;
    new_arr = (int*)malloc(n * sizeof(int));
    if(new_arr == NULL)
    {
        printf("нет памяти\n");
        return 1;
    }

    fp = fopen("file.bin", "rb");
    if(fp == NULL)
    {
        printf("ошибка\n");
        free(new_arr);
        return 1;
    }

    fread(new_arr, sizeof(int), n, fp);
    fclose(fp);

    for(int i = 0; i < n; i++)
    {
        printf("%d ", new_arr[i]);
    }
    printf("\n");

    free(new_arr);
    return 0;
}