#include <stdio.h>

int main(){
    int n;
    printf("Enter N: \n");
    scanf("%d", &n);

    int arr[n];
    printf("Enter N numbers: \n");
    for(int i=0; i<n; i++) {
    scanf("%d", &arr[i]);
    }

    printf("Your numbers but bigger than 0: \n");

    for(int i=0; i<n; i++) {
        if(arr[i]<0) {
            arr[i] = 0; 
        }
    }
    




    for(int i=0; i<n; i++) {
        printf("%d ", arr[i]);
        }
    printf("\n");
    return 0;
}