#include <stdio.h>

int main(void)
{
    int a,b;
    scanf("%d %d", &a, &b);
    float div = (float)a/b;
    printf("Division of your numbers is: %.1f", div);
    return 0;
}
