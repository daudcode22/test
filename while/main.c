#include <stdio.h>



int main(){
    char Options;
        printf("masukan :");
        scanf("%c",&Options);
    while(1){
      
        if(Options == 'y'){
            break;
        } else {
             printf("masukan :");
            scanf("%c",&Options);
        }
        
    }



}