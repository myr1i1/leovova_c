#include <stdio.h>

int main(){

    int n;

    printf("Enter N of numbers: \n");
    scanf("%d", &n);
    if(n<0) printf("N have to be more than 0");


    int arr[n];
    printf("Enter %d numbers: ", n);
    for(int i=0; i<n; i++) {
    scanf("%d", &arr[i]);
    }

    int max = arr[0];
    for(int i = 1; i<n; i++) {
        if(arr[i]>max) {
            max = arr[i];
        }
    }
    printf("Max of your numbers is: %d ", max);
    return 0;
}