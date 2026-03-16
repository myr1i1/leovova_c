#include <stdio.h>

int main() {
    char ch;
    printf("Enter character: ");
    scanf(" %c", &ch);
    
    if (ch >= '0' && ch <= '9') {
        printf("Цифра\n");
    } else if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
        printf("Буква\n");
    } else {
        printf("Другой символ\n");
    }
    
    return 0;
}