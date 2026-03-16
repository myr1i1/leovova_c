#include <stdio.h>

int main(void)
{
    int a,b,c;
    printf("Input 3 numbers: \n");
    scanf("%d %d %d", &a, &b, &c);

    float ave = (float)(a + b + c)/3;
    printf("Average of your numbers is: %.2f\n", ave);
    return 0;
}

