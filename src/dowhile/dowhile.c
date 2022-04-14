#include <stdio.h>

int main(void){
    int i;
    i = 0;
    do {
        printf("Variable i has initial value of %d\n", i);
        i++;
    }
    while(i<10);{
        printf("hello %d\n", i);
    }
    return 0;
}