#include <stdio.h>
#include <limits.h>  // для INT_MIN

int main() {
    int n;
    printf("Введите количество элементов: ");
    scanf("%d", &n);
    
    int arr[n];
    printf("Введите %d целых чисел:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Инициализируем максимум и второй максимум минимально возможными значениями
    int max = INT_MIN;      // INT_MIN = -2147483648 (минимальное int значение)
    int second_max = INT_MIN;
    
    // Проходим по всем элементам массива
    for (int i = 0; i < n; i++) {
        if (arr[i] > max) {
            // Если нашли новый максимум, то старый максимум становится вторым
            second_max = max;
            max = arr[i];
        } 
        else if (arr[i] > second_max && arr[i] < max) {
            // Если элемент между max и second_max, обновляем second_max
            second_max = arr[i];
        }
    }
    
    printf("Второй по величине элемент: %d\n", second_max);
    return 0;
}