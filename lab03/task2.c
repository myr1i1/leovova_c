#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    printf("Введите размер массива: \n");
    scanf("%d", &n);

    int *arr;
    arr = (int*)calloc(n, sizeof(int));

    if(arr == NULL) {
        printf("Не удалось выделить память\n");
        return 1;
    }


    printf("Введите массив\n");
    for(int i = 0; i<n; i++) {
        scanf("%d", &arr[i]);
    }

    for(int i = 0; i<n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    free(arr);
    arr = NULL;

    return 0;
}