#include <stdio.h>

int main() {
    int n;
    printf("Введите количество элементов: ");
    scanf("%d", &n);
    
    int arr[n];
    printf("Введите %d целых чисел:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Находим индекс первого максимального элемента
    int max_index = 0;
    for (int i = 1; i < n; i++) {
        if (arr[i] > arr[max_index]) {
            max_index = i;
        }
    }
    
    // Обнуляем все элементы после максимального
    for (int i = max_index + 1; i < n; i++) {
        arr[i] = 0;
    }
    
    // Выводим результат
    printf("Массив после обнуления:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0;
}