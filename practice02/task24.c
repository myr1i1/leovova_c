#include <stdio.h>

int main()
{
    int n, prime = 1;
    printf("Enter a number: \n");
    scanf("%d", &n);

    if(n < 2) prime = 0;
    else
    {
        for(int i = 2; i<n; i++)
        {
            if(n%n == 0)
            {
                prime = 0;
                break;
            }
        }
    }
    if(prime) printf("%d is a prime number \n", n);
    else printf("%d is not a prime number \n", n);
    return 0;
}