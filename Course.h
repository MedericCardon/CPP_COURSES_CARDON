#include <iostream>
#include <string>



class Course{

    private:

        std::string _identifiant;
        int _scoreEnregistrer; // maximum 3 //
        int _scoreJoueur1;
        int _scoreJoueur2;
        int _scoreJoueur3;
        int _scoreJoueur4;
        std::string _typeCourse;
        std::string _nomJoueur;

    public:
    
        void afficherNomJoueur();
        void afficherGrilleScore();
        void afficherCourse();
        void classement();


    // Constructeur //

        Course();                  
        Course(std::string identifiant, std::string type);
};
        