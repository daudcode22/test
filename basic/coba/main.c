#include "stdio.h"

void main() {
    int First,Second,Hasil;
    char InputOperator;


    printf("Masukan Angka pertama ");
    scanf("%d",&First);
    printf("Masukan Angka Kedua ");
    scanf("%d",&Second);
    printf("%d %d",First,Second);
    printf("Masukan operator ");
    scanf("%s",&InputOperator);
    printf("%c",InputOperator);

    Hasil = First+Second;
    printf("%d",Hasil);
    char Dump;
    scanf("%c",Dump);
}