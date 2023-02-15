#include <iostream>




int main(){
    double *my_data; // Create the pointer
    my_data = new double[5]; // No need to work out the size of the array (in bytes)
    delete[] my_data; // Free up the memory 
    return 0;
}