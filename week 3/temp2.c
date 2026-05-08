#include <stdio.h>

int main(void){
    float Celsius, Fahrenheit;
    printf("Enter Temperature C: \n");
    scanf("%f", &Celsius);
    printf("\n");
    Fahrenheit = (Celsius*1.8) + 32;
    printf("Temperature in Fahrenheit = %.2f \n", Fahrenheit);

    if(Celsius < 0){
        printf("%.2f is a ❄️ Freezing weather. \n", Celsius);
    } else if(Celsius < 10){
        printf("%.2f is a 🥶 Very cold weather. \n", Celsius);
    } else if(Celsius < 20){
        printf("%.2f is a 🧥 Chilly weather. \n", Celsius);
    } else if(Celsius < 30){
        printf("%.2f is a 🖼️ Normal weather. \n", Celsius);
    } else if(Celsius < 40){
        printf("%.2f is a ☀️ Hot weather. \n", Celsius);
    } else {
        printf("%.2f is a 🔥 Very hot weather. \n", Celsius);
    }
}
