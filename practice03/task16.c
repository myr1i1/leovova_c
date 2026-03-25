#include <stdio.h>

int main() {
    int n;
    printf("Введите количество элементов: ");
    scanf("%d", &n);
    
    int arr[n];
    printf("Введите %d целых чисел:\n", n);
    
    // Сначала вводим элементы и считаем сумму
    int sum = 0;
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    
    // Вычисляем среднее арифметическое
    double average = (double)sum / n;
    
    // Считаем элементы, строго большие среднего
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] > average) {
            count++;
        }
    }
    
    printf("Среднее арифметическое: %.2f\n", average);
    printf("Количество элементов больше среднего: %d\n", count);
    
    return 0;
}