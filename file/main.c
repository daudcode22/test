#include <stdio.h>
#include <string.h>
#define MAX_LIMIT 50

int main() {
    
FILE *fptr;


char FileName[50];
printf("\nMasukan nama file : ");
scanf("%s",FileName);

getchar();
fptr = fopen(FileName,"a");

char Text[50];
printf("\nMasukan isi file : ");
fgets(Text,sizeof(Text),stdin);
getchar();
fprintf(fptr,"%s",Text);


fclose(fptr);
  return 0;
}