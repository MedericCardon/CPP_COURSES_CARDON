#include <string>
#include <iostream>


class Course{
    private:
        std::string _identifiant;
        std::string _scoreEnregistrer; // maximum 3 //
        std::string _scoreJoueur;
        std::string _typeCourse;
        std::string _nomJoueur;

    public:
        void afficherNomJoueur();
        void afficherGrilleScore();
        void afficherCourse();
        void classement();


    // Constructeur //

        Course();                  
        Course(std::string identifiant, std::string nomJoueur);
};
        