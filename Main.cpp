#include "Course.cpp"

#include <iostream>
#include <string>
#include <vector>

using namespace std;


int main(){

    std::cout<<"hello"<<std::endl;
    
    Course Course1 =Course("course tier 1","facile");
    Course1.afficherGrilleScore();
}