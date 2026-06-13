#include <stdio.h>

int main() 
{
	int Age;
	while(1) {
		printf("\n masukan usia kamu : ");
		scanf("%d",&Age);
		if(Age > 100) {
			continue;
		} else {
			break;
		}

	
	}

	
	if(Age < 18) {
		printf("\nkamu masih dibawah umur, dilarang pake Aplikasi Foo.");
	} else if (Age >= 18) {

		printf("\nOke kamu bisa memakai aplikasi Foo");
	}

	return 0;

}

