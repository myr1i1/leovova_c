#include <stdio.h>

int main(void)
{
    int a,b,c;
    printf("Input three numbers: \n");
    scanf("%d %d %d", &a, &b, &c);

    int max;
    if (a >= b && a >= c) {
        max = a;
    } else if (b >= a && b >= c) {
        max = b;
    } else {
        max = c;
    }
    
    printf("Maximum: %d\n", max);
    return 0;
}
    