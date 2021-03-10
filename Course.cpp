#include "Course.h"
#include <string>
#include <iostream>


void Course::afficherNomJoueur(){
    std::cout << _nomJoueur <<std::endl;
}

void Course::afficherGrilleScore(){
    std::cout<< "grille"<< std::endl; // a faire //
}

void Course::afficherCourse(){
    std::cout<< _typeCourse <<_identifiant<< std::endl; 
}

void Course::classement(){
    std::cout<< "joueur 1 : "<<_scoreJoueur<<_scoreEnregistrer<< std::endl;
    std::cout<< "joueur 2 : "<<_scoreJoueur<<_scoreEnregistrer<< std::endl;
    std::cout<< "joueur 3 : "<<_scoreJoueur<<_scoreEnregistrer<< std::endl;
    std::cout<< "joueur 4 : "<<_scoreJoueur<<_scoreEnregistrer<< std::endl;
}

int main (){

    Course course_1=Course("course 1", "Bob");
    course_1.afficherNomJoueur();
}