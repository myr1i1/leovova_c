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
    
    // Сортировка пузырьком
    for (int i = 0; i < n - 1; i++) {          // количество проходов
        for (int j = 0; j < n - 1 - i; j++) {  // сравнение соседних элементов
            if (arr[j] > arr[j + 1]) {         // если порядок нарушен
                // Обмен элементов
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    
    // Вывод отсортированного массива
    printf("Отсортированный массив:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0;
}