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

    double ave;
    int sum = 0;
    for(int i=0; i<n; i++) {
        sum += arr[i];
        ave = (double)sum/(double)n;
    }

    printf("%.2f ", ave);
    return 0;

}