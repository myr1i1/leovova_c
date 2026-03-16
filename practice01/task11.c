#include <stdio.h>

int main(void)
{
    int a;
    printf("Input a number: \n");
    scanf("%d", &a);
    
    if(a % 2 == 0) printf("Четное число \n");
    else printf("Нечетное число \n");
    return 0;

}