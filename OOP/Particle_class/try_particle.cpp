#include<iostream>
#include "Particle.h"



/*
    In this piece of code we try the class "Particle"
*/


int main(){

    std::vector<Particle> my_particle_vec; 

    // So we create some particles... 
    Particle *electron = new Particle("electron", 0.511, 300);
    Particle *proton = new Particle("Proton",1000, 500);

    my_particle_vec.push_back(*electron);
    my_particle_vec.push_back(*proton);

    for (Particle p: my_particle_vec){
        p.print_data(); 
    }


    return 0; 

}