#include <stdio.h>
#include <string.h>


int main(){
    char Name[50];

    printf("Hello Who are you ? : ");
    fgets(Name,sizeof(Name),stdin);

    printf("%s %s %s","Hello ",Name,"I Am CODE!");
    printf("\nVIDE CODE IS FUN!, TRY IT!");
        printf("\n Mungkin kamu tidak akan melakukan coding lagi di masa akan datang!");
    return 0;
}