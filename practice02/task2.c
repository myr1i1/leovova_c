#include <stdio.h>

int main(void)
{
    int i = 1;
    int n;

    printf("Enter a number: \n");
    scanf("%d", &n);
    
    for (i=1;i<=n;i++)
    {
        if(i % 2 == 1)
        {
            printf("%d ", i);
        }
    }
    return 0;
}