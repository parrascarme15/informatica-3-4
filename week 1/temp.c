#include <stdio.h>

int main(void){
    float Fahrenheit, Celsius;
    printf("Enter Temperature F: \n");
    scanf("%f", &Fahrenheit);
    printf("\n");
    Celsius = (Fahrenheit-32) / 1.8;
    printf("Temperature in Celsius = %.2f \n", Celsius); // la misma temperatura de f y c es -40
}
