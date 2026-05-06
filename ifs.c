#include <stdio.h>
int main(void){
    int a = 5; // equal sign means assignemnt
    int b = 5;
    int c = 10;

    printf("%d == %d is %d \n", a, b, a==b); // equal sign means comparison
    printf("%d != %d is %d \n", a, c, a != c); //!=means "not equal"
    //val1==val2 is 1 means is true. Ex: 5 is equal to 5, it is true. If not true, is a 0 (false)

    //create a program to check if a number is negative
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    if (number < 0){ //if its true, it will work. if its false it will never happen on the terminal.
        printf("%d is a negative number.\n",number);
    } else {
        printf("%d is a positive number.\n",number);
    }
}
