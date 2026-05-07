#include <stdio.h>

int main(void){
    float Celsius, Fahrenheit;
    printf("Enter Temperature C: \n");
    scanf("%f", &Celsius);
    printf("\n");
    Fahrenheit = (Celsius*1.8) + 32;
    printf("Temperature in Fahrenheit = %.2f \n", Fahrenheit);

    if(Celsius < 0){
        printf("%.2f is a Freezing Weather. \n", Celsius);
    } else if(Fahrenheit < 10){
        printf("%.2f is a Very Cold Weather. \n", Celsius);
    } else if(Fahrenheit < 20){
        printf("%.2f is a Chilly Weather. \n", Celsius);
    } else if(Fahrenheit < 30){
        printf("%.2f is a Normal Weather. \n", Celsius);
    } else if(Fahrenheit < 40){
        printf("%.2f is a Hot Weather. \n", Celsius);
    } else if(Fahrenheit > 40){
        printf("%.2f is a Very Hot Weather. \n", Celsius);
    }
}
