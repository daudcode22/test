#include <stdio.h>
#include <stdlib.h>


int main(){
    
    char *Fullname;
    int LengthOfFullname = 10;
    Fullname = calloc(LengthOfFullname,sizeof(*Fullname));

    for(int Counter = 0; Counter < LengthOfFullname; Counter++){
        Fullname[Counter] = 'A';
    }

    printf("\n namamu %s",Fullname);

    free(Fullname);
    return 0;
}