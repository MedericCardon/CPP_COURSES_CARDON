#include "Course.h"
#include <string>
#include <iostream>


void Course::afficherNomJoueur(){
    std::cout << _nomJoueur <<std::endl;
}

void Course::afficherGrilleScore(){
    std::cout<< "| ID course : "<<_identifiant<<"|"<< std::endl; // a faire //
    std::cout<<"-------------------------------------------------------------------------------"<<std::endl;
    std::cout<<"| Nom Joueur |"<<"Type de course |"<<"Score du joueur |"<< "3 derniers scores |"<<std::endl;
    std::cout<<"-------------------------------------------------------------------------------"<<std::endl;
    std::cout<<"| Joueur 1 : "<<_nomJoueur<<" |"<<_typeCourse<<" |"<<_scoreJoueur<<" |"<<_scoreEnregistrer<<" |"<<std::endl;
    std::cout<<"-------------------------------------------------------------------------------"<<std::endl;
    std::cout<<"| Joueur 2 : "<<_nomJoueur<<" |"<<_typeCourse<<" |"<<_scoreJoueur<<" |"<<_scoreEnregistrer<<" |"<<std::endl;
    std::cout<<"-------------------------------------------------------------------------------"<<std::endl;
    std::cout<<"| Joueur 3 : "<<_nomJoueur<<" |"<<_typeCourse<<" |"<<_scoreJoueur<<" |"<<_scoreEnregistrer<<" |"<<std::endl;
    std::cout<<"-------------------------------------------------------------------------------"<<std::endl;
    std::cout<<"| Joueur 4 : "<<_nomJoueur<<" |"<<_typeCourse<<" |"<<_scoreJoueur<<" |"<<_scoreEnregistrer<<" |"<<std::endl;
    std::cout<<"-------------------------------------------------------------------------------"<<std::endl;
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

Course::Course(std::string identifiant, std::string type) : _identifiant("Course tier 1"), _typeCourse("Facile"),_nomJoueur("Bob"){}