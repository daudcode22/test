#include <stdio.h>
#include <stdbool.h>





int main() {
int VALID_NUMBER;
printf("INPUT NUMBER = ");
scanf("%d",&VALID_NUMBER);

int* PTR_VALID_NUMBER = &VALID_NUMBER;


printf("\nMY VALID NUMBER = %d",VALID_NUMBER);
printf("\nMEMOMERY ADDRES OF VALID NUMBER %p",PTR_VALID_NUMBER);
printf("\nMEMORY ADDRES variable pointer %p",&PTR_VALID_NUMBER);
printf("\nDEREFRENCE VARIABLE POINTER %d",*PTR_VALID_NUMBER);
	return 0;
}
