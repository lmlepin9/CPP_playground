#include "Complex.h"


Complex operator+(const Complex &c1, const Complex &c2)
{
    Complex temp_complex{c1.re + c2.re, c1.im + c2.im};
    return temp_complex; 
}

Complex operator-(const Complex &c1, const Complex &c2)
{
    Complex temp_complex{c1.re - c2.re, c1.im - c2.im};
    return temp_complex; 
}

std::ostream & operator<<(std::ostream &os, const Complex &c){
    if(c.im > 0.){
        os << c.re << " + i" << c.im;
    }

    else if(c.im < 0.){
        os << c.re << " - i" << -1.*c.im;
    }

    else if(c.re == 0 && c.im == 0){
        os << "0.";

    }

    else if(c.im == 0){
        os << c.re; 
    }
    
    return os;  
}


