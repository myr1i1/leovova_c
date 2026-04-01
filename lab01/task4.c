#include <stdio.h>

int main(void)
{
	int a, b;
	printf("Введите два числа: ");
	scanf("%d %d", &a, &b);
	printf("Остаток от деления %d на %d: %d\n", a, b, a % b);
	return 0;
	
}
