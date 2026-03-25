#include <stdio.h>

int main()
{
    int n;
    printf("Enter a number \n");
    scanf("%d", &n);

    for(int i=1;i<=n;i++) {
        if(i+i > 10) printf("%d ",i);
    }
    return 0;
}