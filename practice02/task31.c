#include <stdio.h>

int main()
{
    char star = '*';
    int n;
    printf("Enter a number: \n");
    scanf("%d", &n);

    for(int i=1;i<=n;i++) {
        for(int i=1; i<=n; i++) {
            printf("%c ", star);
        }
        printf(" \n");
    }
    return 0;
}