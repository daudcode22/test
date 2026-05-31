#include <stdio.h>
#include <string.h>
// #include "question.h"

int main() {
    // struct Question First_Question = {"DAUD","1 x 1 = ?","satu"};

    // Print_Question(First_Question);
    // User_Answer(First_Question);

    char Try_Compare = 'a';
    char My_Compare = 'b';
    (Try_Compare == My_Compare) ? printf("\n TRUE") : printf("\n FALSE") ;

    char First_String[] = "weweweweweweweweew";
    char Second_String[] = "wewewewewuweweweew";
    int LenghtString = sizeof(First_String) / sizeof(First_String[0]);

    for(int LenghtLoop = 0; LenghtLoop < LenghtString; LenghtLoop++) {
        if(First_String[LenghtLoop] != Second_String[LenghtLoop]) {
            printf("\nSALAH");
            break;
        }
        
    }
    return 0;
}