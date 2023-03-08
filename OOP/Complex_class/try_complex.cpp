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
    std::cout << "\n";


    std::cout << "Now we'll test the extraction operator... " << std::endl;
    std::cout << "Please input the real and imaginary parts as Re Im" << std::endl;
    Complex c4;
    if(std::cin >> c4){c4.print_complex();}
    else{std::cout << "Extraction failed..." << std::endl;}

    return 0; 
}