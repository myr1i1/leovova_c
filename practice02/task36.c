#include <stdio.h>
 
int main(void)
{
    int n;
    printf("Enter N: ");
    scanf("%d", &n);

    int numbers[n][n];
  
    for(int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
    {
        if(j == i)
            numbers[i][j] = 1;
        else    
            numbers[i][j] = 0;
    }

    }



    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            printf("%d ", numbers[j][i]);
        }
        printf("\n ");
    }
    return 0;
}