#include <stdio.h>

int main(void){
    float minutes, movie;
    printf("Enter time: \n");
    scanf("%f", &minutes);
    printf("\n");
    movie = (minutes / 60) ;
    printf("Interstellar time = %.2f \n", movie);
}
