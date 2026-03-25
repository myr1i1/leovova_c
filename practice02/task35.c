#include <stdio.h>

int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);

    for(int i=1;i<=10;i++) {
            int z = n*i;
            if(z>30) continue;
            printf("%d * %d = %d \n", n,i,z);
    }
    return 0;
}