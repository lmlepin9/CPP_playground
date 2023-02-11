#include <iostream>
#include <limits>
#include <string> 


int GetInterger(){
     /*
    This function requests a integer to the user and cheks its validity 

    It works like this:
    First (cin.clear) we reset the error flag of the cin object 
    Second (cin.ignore) we clean the cin buffer (i.e: whatever it was the user input)
    Also it checks wether there are any leftovers after the integer in case the user
    inputs a float 
    
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

std::string GetYesorNo(){
    std::string your_answer;
    while((std::cout << "Answer yes or no ") && ( !(std::cin >> your_answer) || (your_answer != "yes" && your_answer != "no") ) ){
        std::cout << "Please, just answer yes or no, try again" << std::endl;
        std::cout << "\n" << std::endl;
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    
    } 
    return your_answer;
}

// V and (V or (F and F) )

int main(){


    int input_int = GetInterger(); 
    std::cout << "Your interger is: " << input_int << std::endl;
    std::string input_yn = GetYesorNo() ; 
    std::cout << "You answer is: " << input_yn << std::endl;
    return 0;
}




