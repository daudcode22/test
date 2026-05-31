
#include <stdio.h>

int Eksponen(int number) {

return number * number;
}

void Predefined();

int main() {
	int number = 9;
	float Floating = 12.5;
	char kars = 'a';
int group[100];
for (int x = 0; x <= 101; x++) {
	group[x] = x;

}
printf("\n");
for (int x = 0; x <= 101; x++) {
	printf("%d",group[x]);
}
printf("\n%d",Eksponen(10));	
	printf("\n%f",Floating);
	printf("\n%c",kars);
	printf("\nhello world %d",number);
	
	Predefined();



}
void Predefined() {

printf("\nhalo");
}

