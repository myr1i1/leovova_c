#include <stdio.h>

int main() {
    int n;
    printf("Введите количество элементов: ");
    scanf("%d", &n);
    
    int arr[n];
    printf("Введите %d целых чисел:\n", n);
    
    int sum = 0;
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    
    printf("Сумма всех элементов: %d\n", sum);
    return 0;
}