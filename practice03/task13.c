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
    
    // Сохраняем последний элемент
    int last = arr[n - 1];
    
    // Сдвигаем все элементы на одну позицию вправо
    for (int i = n - 1; i > 0; i--) {
        arr[i] = arr[i - 1];
    }
    
    // Ставим сохранённый элемент на первое место
    arr[0] = last;
    
    // Вывод результата
    printf("Массив после сдвига:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    
    return 0;
}