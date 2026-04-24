#include <stdio.h>

int main(void){
    //Variables for TORTAS CHUMA
    float price1 = 74.99;
    int quantity1 = 15;
    char select1 = 't';

    //Variables for Coca Cola
    float price2 = 24.99;
    int quantity2 = 10;
    char select2 = 'c';

    //Variables for Tacos El Piporro
    float price3 = 79.99;
    int quantity3 = 30;
    char select3 = 'p';

    printf("Vending Machine Stock\n");
    printf("-----------------------------\n");
    printf("TORTAS CHUMA\n");
    printf("Price:$%.2F\n",price1);
    printf("Quantity:%d\n",quantity1);
    printf("Select:%c\n",select1);
    printf("\n");
    printf("Coca Cola\n");
    printf("Price:$%.2F\n",price2);
    printf("Quantity:%d\n",quantity2);
    printf("Select:%c\n",select2);
    printf("\n");
    printf("Tacos El Piporro\n");
    printf("Price:$%.2F\n",price3);
    printf("Quantity:%d\n",quantity3);
    printf("Select:%c\n",select3);
}
