#include <stdio.h>
#include <ctype.h>
int main() {
    char GROUND[100];
    int movePlayer;
    int lenght = sizeof(GROUND)/sizeof(GROUND[0]);

    for(int Counter = 0; Counter < lenght; Counter++){
        GROUND[Counter] = '|';
    }
      for(int Counter = 0; Counter < lenght; Counter++){
        if(Counter % 10 == 0) {
            printf("\n");
        }
        printf("%c",GROUND[Counter]);
    }
    while(1){
        printf("\npindah kemana : ");
        scanf("%d",&movePlayer);
        if(isalpha(movePlayer)) {
            break;
        } 
        for(int Counter = 0; Counter < lenght; Counter++){
             if(Counter % 10 == 0) {
                 printf("\n");
            }
             printf("%c",GROUND[Counter]);
    }
        for(int Counter = 0; Counter < lenght; Counter++){
             GROUND[Counter] = '|';
     }


    }

}