#include <stdio.h>

int main() {

    char MyTest[] = "Nujing Kami";
    int lenght = sizeof(MyTest) / sizeof(MyTest[0]);
    for (size_t i = 0; i < lenght; i++)
    {
        printf("%c ",MyTest[i]);
      
        printf("%p ",&MyTest[i] );
    
}
}