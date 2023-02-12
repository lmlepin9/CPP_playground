#include <iostream>


/*

In C++ we can overload functions. This means that we can re-use the same function name
for functions with different number of inputs or different data-types, but similar functionality. 

*/

int AddTwoNumbers(int number_a, int number_b){
    int result = number_a + number_b; 
    return result; 
}

float AddTwoNumbers(float number_a, float number_b){
    float result = number_a + number_b;
    return result; 
}



int main(){

    int user_int_a, user_int_b;
    float user_float_a, user_float_b;

    std::cout << "Give me two integers " << std::endl;
    std::cin >> user_int_a;
    std::cin >> user_int_b;

    std::cout << "The sum of the two integers is :" << AddTwoNumbers(user_int_a, user_int_b) << std::endl;

    std::cout << "\n" << std::endl;

    std::cout << "Give me two floats " << std::endl;
    std::cin >> user_float_a;
    std::cin >> user_float_b;
    std::cout << "The sum of the two floats is: " << AddTwoNumbers(user_float_a, user_float_b) << std::endl;


    return 0; 
}