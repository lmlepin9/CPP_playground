#include <iostream>
#include <limits>


int GetInterger(){

     /*
    This works like this:
    First (cin.clear) we reset the error flag of the cin object 
    Second (cin.ignore) we clean the cin buffer (i.e: whatever it was the user input)
    
    */ 

    int my_interger;
    while ( ( std::cout << "Give me an interger greater than zero " ) && ( !( std::cin >> my_interger ) || my_interger < 0  || std::cin.get() != '\n' ) ) {
        std::cout << "That's not an interger, try again please" << std::endl; 
        std::cout << "\n" << std::endl;
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n' );

    }

    return my_interger; 
}


int main(){


    int input_int = GetInterger(); 
    std::cout << "Your input is: " << input_int << std::endl;
    return 0;
}




