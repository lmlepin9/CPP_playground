#include <iostream>
#include <cmath>
#include "Matrix.h"


/*

Main function that demonstrates the use of the Matrix class

*/


int main(){
    Matrix m1;
    Matrix m2(3,2);
    std::cout << "Matrix 1 (rows,columns): (" << m1.get_rows() << "," << m1.get_columns() << ")" << std::endl;
    std::cout << "Matrix 2 (rows,columns): (" << m2.get_rows() << "," << m2.get_columns() << ")" << std::endl;


    Matrix m3(2,2,{1., 2., 3., 4.});

    // Testing copy constructor 
    Matrix m4{m3}; 
    m4(1,1)=10.;


    // Testing copy assignment 
    Matrix m5;
    m5 = m3;
    m5(1,1)=20.;

    std::cout << m2(1,2) << std::endl;
    std::cout << m3(1,1) << std::endl;
    std::cout << m4(1,1) << std::endl;
    std::cout << m5(1,1) << std::endl;




}