#include <iostream>


/*

Each variable that we define in C++ has a value associated
and also an address. The later is the place that such variable
occupies in the hardware memory. 


Address operator in C++: & 
Dereferencing operator in C++: * 

We can use * to access the content stored in an specific address

What is a pointer? A pointer is a variable that holds the address of a variable 
type *pointer_name 


Passing arguments: In C++ we have three ways to pass arguments to functions 

1.- Pass by value: Use a local copy of the value inside the function scope (memory expensive)
2.- Using pointers: Directly pass the memory address of the variable 
3.- Using references: Provide a memory address and use an alias for the value 


*/



void address_and_pointers(){
    char my_char{'F'};
    int my_int{120};

    std::cout << "This is the content of my char: " << my_char << std::endl;
    // Note that at the moment of doing &my_char you get *my_char (pointer)
    // So the stream tries to print this pointer 
    std::cout << "This is the memory address of my char: " << static_cast<void *>(&my_char) << std::endl;

    std::cout << "\n" << std::endl;

    std::cout << "This is the content of my int: " << my_int << std::endl;
    std::cout << "This is the memory address of my int: " << &my_int << std::endl;
    std::cout << "Dereferencing the address of my int: " << *(&my_int) << std::endl;
    std::cout << "\n" << std::endl;

    float *my_pointer; 
    float my_float{2.5};
    my_pointer = &my_float; 
    std::cout << "This is what the pointer contains, the address of your float: " << my_pointer << std::endl;
    std::cout << "This is the address of your float using &: " << &my_float << std::endl;
    std::cout << "This is what is stored in the address that your pointer is pointing to (dah): " << *my_pointer << std::endl;


}



// Pass by value 
void double_value(float my_value){
    /*
    Note that this will create a new variable that will live only inside
    this function scope. Therefore, it won't be updated outside of it. 
    */
    my_value*=2.;
}


// Passing by pointers
void double_value(float *pointer_to_float){
    // This will update the value of the variable that the pointer is pointing to 
    (*pointer_to_float)*=2.; 
}

// Passing by reference
// The ampersand goes right after the variable type 
void double_value_by_reference(float& my_reference){
    /*
    Note that this has the same effect as passing by pointer since now we are passing
    the address of the object to the function. Also, coding-wise this is identical to
    passing by value therefore we can't overload both functions 
    */
    my_reference*=2.;
}





int main(){

    address_and_pointers(); 

    float *my_pointer; 
    float my_float;
    my_pointer = &my_float; 
    std::cout << "Input a float number " << std::endl;
    std::cin >> my_float; 
    std::cout << "Your float is : " << my_float << std::endl;
    double_value(my_float);
    std::cout << "Your float after passing by value is: " << my_float << std::endl;
    double_value(my_pointer);
    std::cout << "Your float after passing by pointer is: " << my_float << std::endl;
    double_value_by_reference(my_float);
    std::cout << "Your float after passing by reference is: " << my_float << std::endl;



    return 0; 
}