#include <stdio.h>
#include <stdbool.h>
#define bool _Bool
int main() {
    int Number = 10;
    double FloatNumber = 12.2;
    int SumMeInt = Number + FloatNumber;
    double SumMeDouble = Number + FloatNumber;
    bool CheckNumber = Number > FloatNumber;
    printf("%d",CheckNumber);

    printf("\n save in variable calculation %d",SumMeInt);
    printf("\n save in variable calculation %f",SumMeDouble);

    printf("\n direct calculation %d",Number + FloatNumber);
    printf("\n direct calculation %f",Number + FloatNumber);

}