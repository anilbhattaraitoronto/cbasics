#include <stdio.h>

int main (void){
    float price;
    price = 2.99;
    if ( price < 3){
        printf("The price is too low.\n");
    }else{
        printf("The price is high!\n");
    }
    return 0;
}