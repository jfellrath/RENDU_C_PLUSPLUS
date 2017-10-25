#include "Carte.h"

using namespace std;

    // Constructeur;
    Carte::Carte(){
        m_nom = "";
        m_prenom = "";
        m_adresse = "";
        m_cp = "";
        m_ville = "";
        m_id = 0;
    }

    // Destructeur;
    Carte::~Carte(){}

    // Getters
    int Carte::Get_Id(){
        return m_id;
    }
    /*static int Carte::Get_Compteur(){
        return m_compteur;
    }*/
    string Carte::Get_Nom(){
        return m_nom;
    }
    string Carte::Get_Prenom(){
        return m_prenom;
    }
    string Carte::Get_Adresse(){
        return m_adresse;
    }
    string Carte::Get_CP(){
        return m_cp;
    }
    string Carte::Get_Ville(){
        return m_ville;
    }

    // Setters
    void Carte::Set_Nom(string nom){
        m_nom = nom;
    }
    void Carte::Set_Prenom(string prenom){
        m_prenom = prenom;
    }
    void Carte::Set_Adresse(string adresse){
        m_adresse = adresse;
    }
    void Carte::Set_CP(string cp){
        m_cp = cp;
    }
    void Carte::Set_Ville(string ville){
        m_ville = ville;
    }

    void Carte::Afficher(){
        cout << endl << "Nom: " << Get_Nom() << endl << "Prenom: " << Get_Prenom() << endl << "Adresse: " << Get_Adresse() << endl << "Code Postal: " << Get_CP() << endl << "Ville: " << Get_Ville() << endl;
    }

    void Carte::Modifier(string nom,string prenom,string adresse,string cp,string ville){
        Set_Nom(nom);
        Set_Prenom(prenom);
        Set_Adresse(adresse);
        Set_CP(cp);
        Set_Ville(ville);
    }

    void Carte::Supprimer(){
        Set_Nom("");
        Set_Prenom("");
        Set_Adresse("");
        Set_CP("");
        Set_Ville("");
    }
