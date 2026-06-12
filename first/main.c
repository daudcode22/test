#include <stdio.h>
#include <string.h>
    struct Hello{
        char Name[25];
        int Age,StudentID;
    };
void SayMyName(struct Hello Student){
    printf("\nHello %s%s",Student.Name,"!");
}
int main(){
    int Hello = 1;
    struct Hello Budies;

    Budies.Age = 1;
   strcpy(Budies.Name,"Budies Aeriel");
    printf("HI , iam newbie\nNice to meet you!"); // I learn something about printing line
    SayMyName(Budies);
    /*
    weww
    wewe
    we
    we
    we
    ww
    ew
    e
    
    
    */
}