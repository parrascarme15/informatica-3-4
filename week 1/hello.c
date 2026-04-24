#include <stdio.h>

int main(void)
{
    char name[50];
    printf("Enter your name: ");
    scanf("%s",&name); //"s" se refiere al texto, osea una palabra
    printf("Hello %s!\n", name);
    printf("\n");
    int age;
    printf("Enter your age: ");
    scanf("%d",&age);
    printf("You have %d!\n", age);
}

