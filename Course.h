#include <string>
#include <iostream>


class Course{
    private:
        std::string _identifiant;
        std::string _score; // maximum 3 //
        std::string _nomJoueur;

    public:
        void afficher();


    // Constructeur //

        Course();                  
        Course(std::string identifiant, std::string nomJoueur);
};
        