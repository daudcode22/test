#include <stdio.h>


void SayHello();
int Sum(int Number, int SecondNumber);


int main(){

    SayHello();

    return 0;

}

void SayHello(){


    printf("Hello");

    int MyNumber = Sum(1,10);
}

int Sum(int Number, int SecondNumber){


    return Number+SecondNumber;
}