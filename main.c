#include <stdio.h>
#include "mylib.h"

void SayHello();
int Sum(int Number, int SecondNumber);


int main(){

    SayHello();
    SayMyName();
    return 0;

}

void SayHello(){


    printf("Hello");

    int MyNumber = Sum(1,10);
}

int Sum(int Number, int SecondNumber){


    return Number+SecondNumber;
}