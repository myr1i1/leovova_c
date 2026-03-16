#include <stdio.h>

int main(void)
{
    int a = 32;

    printf("Base num = %d\n", a); // 32

    printf("Post-increment = %d\n", a++); // Сначала выводится текущее значение а, затем увеличивает на 1.
    printf("Post increment result = %d\n", a); // 33, так как пост инкремент увеличил его в прошлой строке

    printf("Pre-increment = %d\n", ++a); // увиличт до 34, затем выводит его
    printf("Pre-increment result = %d\n", a);
    return 0;

}
