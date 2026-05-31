#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
     srand(time(NULL));
     char Options;
     int Length;
        printf("Masukan panjang password : ");
        scanf("%d",&Length);
        while(1) {
            if(Length < 12) {
            printf("\nBiar aman minimal 12!");
             printf("\nMasukan panjang password : ");
            scanf("%d",&Length);
            } else {
                break;
            }
        }
        printf(" PASSWORD KAMU : ");
        for(int counter = 0; counter < Length; counter++) {
        int dice1 = ((rand() % 30+10)*2) + 22;

        printf("%c",dice1);
        }
      
}