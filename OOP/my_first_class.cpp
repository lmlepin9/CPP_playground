#include<string>
#include<iostream>
#include<vector>

// Let's try something similar to what I did with the structures but with classes

class particle
{
    public:
        std::string name;
        float mass;
        float energy;
        void print_data();
        double gamma(){return energy/mass;};


    
};
