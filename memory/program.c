#include <stdio.h>
#include <stdlib.h>
#include <string.h>




int main() {
  
    int *Students;
    int NumOfStudent = 10;

    for(int counter = 0; counter <= sizeof(NumOfStudent); counter++) {
        NumOfStudent++;
        Students = calloc(NumOfStudent,sizeof(*Students));
        Students[counter] = counter;
    }

        for(int counter = 0; counter <= sizeof(NumOfStudent); counter++) {
            printf("%d", Students[counter]);
      
    }
    return 0;
}

