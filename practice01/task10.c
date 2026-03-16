#include <stdio.h>

int main(void)
{
    int a;
    printf("Input a number: \n");
    scanf("%d", &a);

    int b = a & 1;
    int c = a | 1;
    int d = a ^ 1;
    int e = ~a;

 
    printf("%d & 1 = %d\n",a,b);
    printf("%d | 1 = %d\n",a,c);
    printf("%d ^ 1 = %d\n",a,d);
    printf("~%d = %d\n", a,e);
    return 0;
}