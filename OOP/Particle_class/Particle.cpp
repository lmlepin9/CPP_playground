// Syntax for headers 
#include "Particle.h"
#include <iostream> 


// With the assistance of the scope resolution operator :: we can associate this function with the particle class 
// The practice is that we implement the functions in the .cpp file and we associate them with the classe using the header Particle.h 
void Particle::print_data(){
    std::cout.precision(3);
    std::cout << "Particle [name, mass, momentum, E]: " << name << " " << mass
    << " " << momentum << " " << energy << std::endl; 
    return; 
}