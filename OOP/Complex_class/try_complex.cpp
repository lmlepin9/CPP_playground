#include "Complex.h"
#include <iostream>

int main(){

    Complex c1 = Complex(2.0, 3.0);
    Complex c2 = Complex(-3., -9.0);
    c1.print_complex();
    std::cout << "The norm of your complex number is: " << c1.get_modulus() << std::endl; 


    Complex c3 = c1 + c2;
    std::cout << "The sume of c1 and c2 is: " << std::endl;
    c3.print_complex();

    std::cout << "Testing << overload: " << c3 << std::endl; 

    return 0; 
}