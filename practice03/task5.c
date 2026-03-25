#include <stdio.h>

int main(){
    int n;
    printf("Enter N: \n");
    scanf("%d", &n);

    int arr[n];
    printf("Enter N numbers: \n");
    for(int i=0;i<n;i++) {
        scanf("%d", &arr[i]);
    }

    int count = 0;

    for(int i=0; i<n; i++) {
        if(arr[i]<0) {
            count++;
        }
    }
    printf("%d \n", count);
    return 0;
}