#include <stdio.h>

int main(void)
{
    int n;
    printf("Enter a number: \n");
    scanf("%d", &n);

    for (int i=1; i<=n; i++)
    {
        int square = i * i;
        if(square > 50)
        {
            printf("%d^2 = %d\n", i, square);
        }
    }
    return 0;
}