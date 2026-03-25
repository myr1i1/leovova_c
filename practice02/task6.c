#include <stdio.h>

int main(void)
{
    int n, count = 0;
    printf("Enter a number: \n");
    scanf("%d", &n);

    for (int i=1; i<=n; i++)
    {
        if(i % 2 == 0)
        {
            count++;
        }
    }
    printf("Count of even numbers : %d ", count);
    return 0;
}