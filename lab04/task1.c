#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fp = fopen("test.txt", "w");
    if(fp==NULL) {
        perror("Неудача \n");
        return 1;
    } else {
        printf("Все гуд \n");
    }

    fclose(fp);
    return 0;


}