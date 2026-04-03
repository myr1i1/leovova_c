#include <stdio.h>
#include <stdlib.h>

int main() {
    char str[] = "Hello Lisa Leonova\n";
    int size = sizeof(str)/sizeof(str[0]);

    FILE *fp = fopen("file.txt", "w");
    if(fp) {
        for(int i = 0; i < size; i++) {
            putc(str[i], fp);
        }
    }
    fclose(fp);

    char c;
    FILE *f = fopen("file.txt", "r");
    if(f) {
        while((c=getc(f)) != EOF) {
            printf("%c", c);
        }
        fclose(f);
    }
    return 0;

}