#include <stdio.h>

int main(void) {
    int n;
    printf("Введите количество элементов: ");
    scanf("%d", &n);
    
    int arr[n];
    printf("Введите %d целых чисел:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    int x;
    printf("Введите число x: ");
    scanf("%d", &x);
    
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            count++;
        }
    }
    
    printf("Количество вхождений: %d\n", count);
    return 0;
}