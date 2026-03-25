#include <stdio.h>

int main()
{
    int n;
    char star = '*';
    printf("Enter a number: ");
    scanf("%d", &n);

    for(int i=n;i>=1;i--) {
        for(int g=i;g>=1;g--) {
            printf("%c ", star);
        }
        printf(" \n");
    }
    return 0;
}