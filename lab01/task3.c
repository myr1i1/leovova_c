#include <stdio.h>

int main(void)
{
	int a = 32;
	float b = 5.5;
	char c = 'F';

	printf("a = %d, адрес = %p\n", a, (void*)&a);
	printf("b = %.2f, адрес = %p\n", b, (void*)&b);
	printf("c = %c, адрес = %p\n", c, (void*)&c);

    return 0;
}
