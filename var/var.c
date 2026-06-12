#include <stdio.h>

void Kali(float *FirstNumber,float *SecondNumber){
	printf("%f",(*FirstNumber) * (*SecondNumber));

}
int main() {

	float Number;
	float NumberTwo;

	printf("masukan floating number pertama : ");
	scanf("%f",&Number);
	printf("masukan floating number kedua : ");
	scanf("%f",&NumberTwo);
	Kali(&Number,&NumberTwo);


}
