#include <stdio.h>

int main (void){
    int age;
    age = 45;

    switch(age){
        case 18: printf("Under age\n");
        break;
        case 36: printf("Getting old\n");
        break;
        default: printf("Getting old\n");
    }
    return 0;
}