#include <iostream>

void Power(int Number, int MyNumber);

int main(){

    Power(2,90);
  
    std::cout << 90 ** 2;
}

void Power(int Number, int MyNumber) {


    std::cout << "Masukan Number :";
    std::cin >> Number;
    std::cout << std::endl;


    for(int Counter = 1; Counter <= Number; Counter++){
        MyNumber = MyNumber*MyNumber;
        std::cout << Counter << std::endl;
    }

    std::cout << "Hasilnya = " << MyNumber << std::endl;
}