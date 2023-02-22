#include <iostream>
#include <string>
#include <algorithm> 
#include <vector>


/*

    This script creates a vector of structures. 
    It represents different courses with their respective
    names and marks. 
    It also uses std::sort to sort the list of courses 
    by mark 

*/


struct Course {
    float mark; 
    std::string name; 
    int code; 
};



bool compareByMark(const Course &a, const Course &b)
{
    return a.mark > b.mark;
}


int main(){
    Course c1; 
    c1.mark = 7.0;
    c1.name = "Modern Physics";
    c1.code = 3002;

    Course c2;
    c2.mark = 5.8;
    c2.name = "Classical Mechanics";
    c2.code = 3001;

    Course c3;
    c3.mark = 4.5;
    c3.name = "Statistical Mechanics";
    c3.code = 4001;

    std::vector<Course> course_vec = {c1, c2, c3}; 
    std::cout << "Printing unsorted information: " << std::endl;
    for(int i = 0; i < course_vec.size(); i++){

        std::cout << "Course code: " << course_vec[i].code << std::endl;
        std::cout << "Course name: " << course_vec[i].name << std::endl;
        std::cout << "Course mark: " << course_vec[i].mark << std::endl;
        std::cout << "\n" << std::endl;

    }


    std::cout << "Printing courses sorted by marks: " << std::endl;
    std::sort(course_vec.begin(), course_vec.end(), compareByMark);
    for(int i = 0; i < course_vec.size(); i++){

        std::cout << "Course code: " << course_vec[i].code << std::endl;
        std::cout << "Course name: " << course_vec[i].name << std::endl;
        std::cout << "Course mark: " << course_vec[i].mark << std::endl;
        std::cout << "\n" << std::endl;

    }
    return 0; 
}