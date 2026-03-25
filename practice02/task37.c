#include <stdio.h>

int main()
{
    int n;
    printf("Enter N: ");
    scanf("%d", &n);

    int matrix[n][n];

    for(int i = 0; i<n; i++)
    {
        for(int j = 0; j<n; j++)
        {
            if((i + j) % 2 == 0) matrix[i][j] = 1;
            else matrix[i][j] = 0;
        }
    }


    for(int i = 0; i<n; i++)
    {
        for(int j = 0; j<n; j++)
        {
            printf("%d ", matrix[i][j]);

        }
        printf("\n ");
    }
    return 0;
}