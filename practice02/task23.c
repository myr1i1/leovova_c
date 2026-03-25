#include <stdio.h>

int main()
{
    int n;
    int count = 0;
    printf("Enter a number: \n");
    scanf("%d", &n);

    for(int i=1;i<=n;i++)
    {
        if(n%i == 0) count++;
    }

    printf("Number of divisors: %d \n", count);
    return 0;
}