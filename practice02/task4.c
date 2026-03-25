#include <stdio.h>

int main(void)
{
    int n;
    int sum = 0;
    printf("Enter a number: \n");
    scanf("%d", &n);

    for (int i=1; i<=n; i++)
    {
        if(i % 5 == 0)
        {
            sum += i;
        }
    }
    printf("Sum of numbers divided by 5 : %d ", sum);
    return 0;
}
