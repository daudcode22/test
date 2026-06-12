#include <stdio.h>

void Kali(float *FirstNumber,float *SecondNumber){
	printf("%f",(*FirstNumber) * (*SecondNumber));

}
int main() {

	float Number;
	float NumberTwo;
	int TestNumber;
	printf("masukan floating number pertama : ");
	scanf("%f",&Number);
	printf("masukan floating number kedua : ");
	scanf("%f",&NumberTwo);
	printf("\n masukan bilangan bulat : ");
	scanf("%d",&TestNumber);
	Kali(&Number,&NumberTwo);
	printf("\n %d",TestNumber * NumberTwo);


}
