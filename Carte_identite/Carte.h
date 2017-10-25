#ifndef CARTE_H_INCLUDED
#define CARTE_H_INCLUDED

#include <iostream>
#include <string>

using namespace std;

class Carte{

public:
    Carte();
    ~Carte();

    // Getters
    int Get_Id();

    string Get_Nom();
    string Get_Prenom();
    string Get_Adresse();
    string Get_CP();
    string Get_Ville();

    // Setters
    void Set_Nom(string nom);
    void Set_Prenom(string prenom);
    void Set_Adresse(string adresse);
    void Set_CP(string cp);
    void Set_Ville(string ville);

    void Afficher();
    void Modifier(string nom,string prenom,string adresse,string cp,string ville);
    void Supprimer();

private:

    int m_id;
    //static int m_compteur;
    string m_nom;
    string m_prenom;
    string m_adresse;
    string m_cp;
    string m_ville;

};

#endif // CARTE_H_INCLUDED
