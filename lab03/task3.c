#include <stdio.h>
#include <stdlib.h>



int find_max(int *arr, int size) {
    int max = arr[0];
    for (int i = 0; i < size; i++) {
        if (max < arr[i]) {
            max = arr[i];
        }
    }
    return max;
}



int find_min(int *arr, int size) {
    int min = arr[0];
    for (int i = 0; i < size; i++) {
        if (min > arr[i]) {
            min = arr[i];
        }
    }
    return min;
}

int find_sum(int *arr, int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum;
}

int main() {
    int *arr;
    int size;

    printf("Введите размер массива: \n");
    scanf("%d", &size);
    arr = (int*)malloc(size * sizeof(int));

    printf("Введите массив: \n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);  
    }

    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    printf("max: %d\n", find_max(arr, size));
    printf("min: %d\n", find_min(arr, size));
    printf("sum: %d\n", find_sum(arr, size));

    return 0;
}