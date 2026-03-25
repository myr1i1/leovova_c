#include <stdio.h>

int main(void)
{
    int n;
    int sum = 0;
    printf("Enter a number: \n");
    scanf("%d", &n);

    for (int i=1;i<=n;i++)
    {
        if(i % 2 != 0)
        {
            sum += i;
        }
    }
    printf("Sum of odd numbers from 1 to %d is %d\n", n, sum);
    return 0;
}