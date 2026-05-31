#include <stdio.h>
#include <string.h>

enum TAX {
    INDONESIA_LEVEL,
    PLANET_LEVEL,
    GALAXY_LEVEL
};

int main() {
    enum TAX NEW_TAX = INDONESIA_LEVEL;
    printf("%d",NEW_TAX);
    // char ANSWER[] = "";
    // printf("MASUKAN JAWABAN : ");
    // scanf("%s",&ANSWER);
    // printf("\n%s",ANSWER);
    // (ANSWER == "GIGI") ? printf("\nGG") : printf("\nNOT GG");

    switch (NEW_TAX) {
        case 0 :
        printf("\nHORE");
        break;
        case 1 :
        printf("\nNICE");
        break;
        case 2 :
        printf("\nGG");
        break;
    }



    return 0;
}