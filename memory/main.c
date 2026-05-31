#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    int *Student;
    int numStudents;
    // first allocate
    printf("Masukan jumlah siswa pertama : ");
    scanf("%d",&numStudents);

    Student = calloc(numStudents,sizeof(*Student));

    for(int counter = 0; counter <= numStudents; counter++){
        
        Student[counter] = counter;

        printf("\n%s %d %s %d","murid ke : ",counter,"ID A",counter);
    
    }

        //  second allocate
    printf("\nMasukan jumlah siswa kedua : ");
    scanf("%d",&numStudents);

    Student = calloc(numStudents,sizeof(*Student));

      for(int counter = 0; counter <= numStudents; counter++){
        
        Student[counter] = counter;

        printf("\n%s %d %s %d","murid ke : ",counter,"ID A",counter);
    
    }


    getchar();
    return 0;

}