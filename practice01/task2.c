#include <stdio.h>

int main(void)
{
    int a;
    int b;
    printf("Input two numbers: ");
    scanf("%d %d", &a, &b);

    printf("Your numbers are: %d %d\n", a,b);

    int sum = a + b;
    printf("The sum of numbers is: %d\n", sum);

    int product = a * b;
    printf("The product of numbers is: %d\n", product);

    int div = a / b;
    printf("The division of numbers is: %d\n", div);

    int difference = a - b;
    printf("The difference of numbers is: %d\n", difference);
    return 0;

}
