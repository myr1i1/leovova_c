#include <stdio.h>

int main(void)
{
    int N;
    printf("Введите N: ");
    scanf("%d", &N);
    
    printf("Простые числа от 1 до %d: ", N);
    
    for(int i = 2; i <= N; i++)
    {
        int isPrime = 1;
        
        for(int j = 2; j * j <= i; j++)
        {
            if(i % j == 0)
            {
                isPrime = 0;
                break;
            }
        }
        
        if(isPrime)
            printf("%d ", i);
    }
    
    printf("\n");
    return 0;
}