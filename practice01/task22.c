#include <stdio.h>

int main() {
    float celsius;
    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);
    
    float fahrenheit = (celsius * 9/5) + 32;
    float kelvin = celsius + 273.15;
    
    printf("Fahrenheit: %.2f\n", fahrenheit);
    printf("Kelvin: %.2f\n", kelvin);
    
    return 0;
}