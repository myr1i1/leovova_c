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
    
    int index = -1;
    for (int i = 0; i < n; i++) {
        if (arr[i] < 0) {
            index = i;
            break;  // прерываем цикл при первом отрицательном
        }
    }
    
    printf("Индекс первого отрицательного: %d\n", index);
    return 0;
}