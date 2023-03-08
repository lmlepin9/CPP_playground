#ifndef COMPLEX_H
#define COMPLEX_H



#include<string>
#include<iostream>
#include<vector>
#include<cmath>


/*
    Implementation of the complex number class 
    It includes usage of:
    constness, friend functions and operator overloading 
*/


class Complex
{
    friend Complex operator+(const Complex &c1, const Complex &c2);
    friend Complex operator-(const Complex &c1, const Complex &c2);
    friend std::ostream & operator<<(std::ostream &os, const Complex &c);
    friend std::istream & operator>>(std::istream &is, Complex &c); 
    private:
        double re;
        double im; 
    
    public:
        Complex() = default;
        Complex(double real, double imaginary):
            re{real}, im{imaginary}{}
        ~Complex(){};

        // Here we declare print_complex const, because we don't allow it to modify the real and imaginary parts 
        // Declaring a method as "const" guarantees that such method won't be able to modify the data members of the class 
        void print_complex() const {std::cout << re << " + i" << im << std::endl; }
        void set_re(double real){re = real;}
        void set_im(double imaginary){im=imaginary;}
        double get_re() const{return re;}
        double get_im() const{return im;}
        double get_modulus() const{return std::sqrt(pow(re,2) + pow(im,2));}



        /*

        We can overload "+" inside the function or outside, see Complex.cpp 
        Complex operator+(const Complex &c) const
        {
        Complex temp_complex{re + c.get_re(), im + c.get_im()};
        return temp_complex; 
        }
        */ 


};



#endif