#include <stdio.h>

int main(void)
{
    int a;
    printf("Input a number: \n");
    scanf("%d", &a);

    if(a % 2 == 0 && a % 3 == 0) printf("Делится на 2 и 3 \n");
    else printf("Не делится на 2 и 3 \n");
    return 0;

}