#include <stdio.h>

int main(void)
{
    int N, K;
    printf("Введите N: ");
    scanf("%d", &N);
    printf("Введите K: ");
    scanf("%d", &K);
    
    printf("Пары чисел (i, j) где i + j = %d:\n", K);
    int found = 0;
    
    for(int i = 1; i <= N; i++)
    {
        for(int j = 1; j <= N; j++)
        {
            if(i + j == K)
            {
                printf("(%d, %d) ", i, j);
                found = 1;
            }
        }
    }
    
    if(!found)
        printf("Нет таких пар");
    
    printf("\n");
    return 0;
}