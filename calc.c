#include <stdio.h>

void addition(void);
void subtraction(void);
void multiplication(void);
void division(void);

float num_1;
float num_2;
char sign;


int main(void){
scanf("%f%c%f", &num_1, &sign, &num_2);
printf("%.2f %c %.2f\n",num_1,sign,num_2);

if (sign == '+' ){
addition();
}else if(sign == '-'){
subtraction();
}else if(sign == '*'){
multiplication();
}else if(sign == '/'){
division();
}}

void addition(void){
float ans = num_1 + num_2;
printf("%.2f %c %.2f = %.2f\n", num_1, sign, num_2, ans);
}

void subtraction(void){
float ans = num_1 - num_2;
printf("%.2f %c %.2f = %.2f\n", num_1, sign, num_2, ans);
}

void multiplication(void){
float ans = num_1 * num_2;
printf("%.2f %c %.2f = %.2f\n", num_1, sign, num_2, ans);
}

void division(void){
float ans = num_1 / num_2;
printf("%.2f %c %.2f = %.2f\n", num_1, sign, num_2, ans);

if(num_2 == 0){
printf("Error\n");
}}
