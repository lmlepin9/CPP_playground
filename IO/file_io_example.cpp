#include <iostream> 
#include <fstream> // This is the one used for files
#include <string>



void CreateFile(){
    std::ofstream my_output;
    my_output.open("output_file.dat");
    for(int i = 0; i < 100; i++){
        my_output << i << "\n";
    }
    my_output.close();
}

void ReadFile(){
    std::ifstream my_input;
    my_input.open("output_file.dat");
    if(my_input.fail()){
        std::cerr<<"Error: file could not be opened" << std::endl;
    }
    else{
        std::string line;
        while (std::getline(my_input,line)){
            std::cout << line << "\n";
        }
    }
}

int main(){
    CreateFile();
    ReadFile();
}