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
    
    int sum = 0;
    
    // Суммируем элементы с чётными индексами (0, 2, 4, ...)
    for (int i = 0; i < n; i += 2) {  // i увеличиваем на 2
        sum += arr[i];
    }
    
    printf("Сумма элементов на чётных позициях: %d\n", sum);
    return 0;
}