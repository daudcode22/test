#include <stdio.h>

void ByteToBit(int NumberInByte) {
    printf("\n%d",NumberInByte * 8);
}

int main() {
    
    int Number = 70;
    double BigFloat = 30E9;
    float FloatingNumber = 2.5;
    char MyChar = 'e';

    char CharArray[] = "weewewewewe";
    int LengthString = sizeof(CharArray) / sizeof(CharArray[0]);
    printf("%s",CharArray);

    printf("\n%d",Number);
    printf(" size in byte %d ",sizeof(Number));

    printf("\n%f",FloatingNumber);
    printf(" size in byte %d ",sizeof(FloatingNumber));
   printf("\n%f",BigFloat);
    printf(" size in byte %d ",sizeof(BigFloat));

     printf("\n%c",MyChar);
    printf(" size in byte %d ",sizeof(MyChar));
 printf("\n");
    for (int i = 0; i < LengthString; i++)
    {
        printf("%c",CharArray[i]);
    }
    
     printf("\n%c",CharArray);
    printf(" size in byte %d ",sizeof(CharArray));

    printf("\n%d",Number + FloatingNumber);
    int InputUser;
    printf("Masukan angka :  ");
    scanf("%d",&InputUser);
    ByteToBit(InputUser);

}
