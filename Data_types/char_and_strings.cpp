#include<iostream>
#include<string>
#include<cstring>


int main(){

    // Define an string using chars 
    char my_char[180] = "Hello world";
    char my_char_two[180] = "This is another string"; 
    std::cout << "This is your char: " << my_char << std::endl;

    // Let's compare two strings: 

    if(strcmp(my_char,my_char_two)){
        std::cout << "Your strings are not equal" << std::endl;
        std::cout << "\n" << std::endl;
    }

    // Concatenate 
    strcat(my_char, my_char_two);
    std::cout << "We can concatenate two strings: " << my_char  << std::endl; 


    // Formatting a char 
    char output_filename[100];
    int file_index{9};
    sprintf(output_filename,"My_particle_data_%d.dat",file_index);
    std::cout << "Your file name is: " << output_filename << std::endl;










    return 0; 
}