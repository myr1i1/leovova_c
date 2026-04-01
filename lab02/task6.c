#include <stdio.h>

union Data {
    int i;
    float f;
    char c;
};

struct Variant {
    union Data data;
    int type;  
};

int main() {
    union Data data;
    
    data.i = 10;
    printf("data.i = %d\n", data.i);
    printf("data.f = %f\n", data.f); 
    printf("data.c = %c\n", data.c);
    
    data.f = 3.14;
    printf("После присвоения float:\n");
    printf("data.i = %d\n", data.i);
    printf("data.f = %f\n", data.f);
    
    printf("Структура с индикатором типа\n");
    
    struct Variant v1;
    v1.type = 1;
    v1.data.i = 42;
    
    struct Variant v2;
    v2.type = 2;
    v2.data.f = 3.14159;
    
    struct Variant v3;
    v3.type = 3;
    v3.data.c = 'A';
    
    // Вывод с проверкой типа
    if(v1.type == 1) printf("v1: int = %d\n", v1.data.i);
    if(v2.type == 2) printf("v2: float = %.5f\n", v2.data.f);
    if(v3.type == 3) printf("v3: char = %c\n", v3.data.c);
    
    return 0;

}