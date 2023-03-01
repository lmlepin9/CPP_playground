#include<string>
#include<iostream>
#include<vector>
// In C++ we can use structures as follows:

// In an structure we can only define attributes but not methods 
struct particle{
    std::string name;
    float mass;
    float momentum;
    float energy; 
    int charge;
    float spin; 

};



int main(){
    
    // Let's intialize a particle object
    std::vector<particle> my_particle_vec;

    particle electron; 
    electron.name = "electron";
    electron.mass=0.511; 
    electron.charge=-1;
    electron.spin=1/2;

    particle muon;
    muon.name = "muon";
    muon.mass=105.6;
    muon.charge=-1;
    muon.spin=1/2;


    particle tau;
    tau.name = "tauon";
    tau.mass=1776.6;
    tau.charge=-1;
    tau.spin=1/2;

    my_particle_vec.push_back(electron);
    my_particle_vec.push_back(muon);
    my_particle_vec.push_back(tau);

    std::cout << "Printing information about your particles..." << std::endl; 

    for(particle p: my_particle_vec){
        std::cout << p.name << " mass: " << p.mass << std::endl;
    }

    return 0; 
}