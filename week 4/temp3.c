#include <stdio.h>
//1. Prototype
void c2f(void);
void f2c(void);

int main(void){
    printf("Temperature Converter \n");
    printf("1. Celsius to Fahrenheit \n");
    printf("2. Fahrenheit to Celsius \n");
    printf("Enter your option: \n");
    int user_response;
    scanf("%d",&user_response);

    if (user_response == 1){
        //3. Call
        c2f();
    } else if (user_response == 2){
        f2c();
    } else {
        printf("Invalid option \n");
    }

}

//2. Define
void c2f(void){
    float Celsius, Fahrenheit;
    printf("Enter Temperature C: \n");
    scanf("%f", &Celsius);
    printf("\n");
    Fahrenheit = (Celsius*1.8) + 32;
    printf("Temperature in Fahrenheit = %.2f \n", Fahrenheit, Celsius);
}
void f2c(void){
    float Fahrenheit, Celsius;
    printf("Enter Temperature F: \n");
    scanf("%f", &Fahrenheit);
    printf("\n");
    Celsius = (Fahrenheit - 32) / 1.8;
    printf("Temperature in Celsius = %.2f \n", Celsius, Fahrenheit);
}

