#include <iostream>
#include <iomanip>

/*

Example taken from the C++ lectures at the University of Manchester 
This block of code shows how to format the output to the user
using a desired level of precision 

*/

int main(){
    const double speed_of_light_estimate{3.0195949};
    const double speed_of_light_error{0.039493};
 


    // This one shows that using setprecision, the preceding bit will be formated with the given precision 
    std::cout << std::setprecision(3) << "Our best estimate of the speed of light is (" << speed_of_light_estimate <<
    " +/- " << std::setprecision(1) << speed_of_light_error  << ")x10^8 m/s" << std::endl; 


    std::cout << "\n" << std::endl;

    // In this we just need to use it once
    std::cout.setf(std::ios::fixed, std::ios::floatfield);
    std::cout << std::setprecision(2) << "Our best estimate of the speed of light is (" << speed_of_light_estimate <<
    " +/- "  << speed_of_light_error  << ")x10^8 m/s" << std::endl; 


    return 0; 
}