#include <iostream> 

/* 

Some basics about CPP data types:

char: is a single character, goes from -128 to 127, if unsigned it goes from 0 to 255
int: represents a interger, could be bot signed or unsigned 

real floating point values:

float: 7-8 decimal places
double: 14-15 decimal places 

void: valuesless entity 

*/


int main(){

    int my_int{-9}; // This is the C++ 11 way to initialise a variable 
    unsigned int my_unsigned_int{1994};
    float my_float{3.14};
    double my_double{1.3e18};
    char my_char{'L'};

    const int my_constant_interger{250}; 
    // This could also be #define my_constant_interger 250; but this syntax is not recommended  

    std::cout << "This is my interger: " << my_int << std::endl;
    std::cout << "This is my unsigned interger: " << my_unsigned_int << std::endl;
    std::cout << "This is my float: " << my_float << std::endl;
    std::cout << "This is my double: " << my_double << std::endl;
    std::cout << "This is my char: " << my_char << std::endl;
    std::cout << "\n" << std::endl;

    // my_constant_interger = 4; This will crash the program since we are trying to re-evaluate a constant

    char my_word[128]{"Dojita"}; // char array with 128 elements 

    for(char a: my_word){
        std::cout << a; 
    }


    return 0; 
}