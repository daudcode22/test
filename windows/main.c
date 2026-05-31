#include <stdio.h>
#include <process.h>
#include <unistd.h>
#include <stdlib.h>
int main(){
   system("color 2");
    int *Number;
    for(int Counter = 0; Counter < 10000; Counter++){
        Number = calloc(Counter,sizeof(*Number)*Counter*Counter);
       
    }
     system("pause");
     free(Number);
    system("pause");
}