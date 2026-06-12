#include <stdio.h>
#include <stdlib.h>

int main() {
	char *Fullname;
	int LengthOfFullname = 30;
	Fullname = calloc(LengthOfFullname,sizeof(*Fullname));
	
	printf("masukin nama : ");
	fgets(Fullname,LengthOfFullname,stdin);
	//scanf("%s",&Fullname);
	//for(int counter = 0; counter < LengthOfFullname; counter++){
	//	scanf("%c",&Fullname[counter]);
	//	Fullname[counter] = Fullname[counter];
	//}	
	//for(int counter = 0; counter < LengthOfFullname; counter++){

	//	printf("%c",Fullname[counter]);
	//}
	printf("%s",Fullname);

}
