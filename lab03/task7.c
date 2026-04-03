#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student {
    char name[50];
    int age;
};

int main()
{
    int n;
    printf("сколько процентов: ");
    scanf("%d", &n);

    struct Student *s;
    s = (struct Student*)malloc(n * sizeof(struct Student));
    if(s == NULL)
    {
        printf("нет памяти\n");
        return 1;
    }

    for(int i = 0; i < n; i++)
    {
        printf("имя %d: ", i+1);
        scanf("%s", s[i].name);
        printf("возраст: ");
        scanf("%d", &s[i].age);
    }

    printf("студенты:\n");
    for(int i = 0; i < n; i++)
    {
        printf("%s, %d let\n", s[i].name, s[i].age);
    }

    int oldest = 0;
    for(int i = 1; i < n; i++)
    {
        if(s[i].age > s[oldest].age)
        {
            oldest = i;
        }
    }

    printf("самый старый: %s, %d let\n", s[oldest].name, s[oldest].age);

    free(s);
    return 0;
}