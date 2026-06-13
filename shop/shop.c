#include <stdio.h>
#include <stdlib.h>

int main() {
	char *Items;
	int Lengthname = 30;
	Items = calloc(Lengthname,sizeof(*Items));
	
	float Prize = 0.0f;
	int Amount;

	printf("\n masukan nama barang : ");
	fgets(Items,Lengthname,stdin);
	
	printf("\n masukan jumlah barang : ");
	scanf("%d",&Amount);
	
	printf("\n masukan harga : ");
	scanf("%f",&Prize);

	printf("\n nama barang : %s",Items);
	printf("\n jumlah barang dan harga barang  : %d %s %.2f",Amount," |  Rp.",Prize);
	Prize = Amount * Prize;
	printf("\n total harga : Rp.%.2f", Prize);
}

