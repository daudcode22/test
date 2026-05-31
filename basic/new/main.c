#include "stdio.h"

int main(){
    int Num1;
    int Num2;
    int Hasil;
    char operator;
    printf("Selamat Datang di App Saya\n");

    printf("\nMasukkan Angka Pertama : ");
    scanf("%d",&Num1);
    printf("\nMasukan angka kedua :");
    scanf("%d",&Num2);
    printf("angka anda : %d,%d",Num1,Num2);
    printf("\n hasilnya : %d",Num1+Num2);
}