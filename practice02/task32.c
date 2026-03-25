#include <stdio.h>

int main()
{
    int n;
    char star = '*';
    printf("Enter a number: ");
    scanf("%d", &n);

    for(int i=1;i<=n;i++){
        for(int g=1;g<=i;g++) {
            printf("%c ", star);
        }
        printf(" \n");
    }
    return 0;
}