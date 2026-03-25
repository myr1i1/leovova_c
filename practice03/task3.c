#include <stdio.h>

int main(){
    int n;
    printf("Enter N: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d numbers: ", n);
    for(int i=0;i<n;i++) {
        scanf("%d", &arr[i]);
    }

    int min = arr[0];
    int index;
    for(int i=1;i<n;i++) {
            if(arr[i]<min) {
                min = arr[i];
                index = i;
            }
    }
        printf("Min number of yours: %d \n", min);
        printf("Index of your min number: %d \n", index);
    return 0;
}