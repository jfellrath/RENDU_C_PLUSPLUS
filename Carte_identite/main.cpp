#include <stdio.h>

#include "Carte.h"

    void Ajouter(Carte *carte, int compteur);
    void Modifier(Carte *carte);
    void Supprimer(Carte *carte);
    void Afficher(Carte *carte);
    int IncrementerCompteur();
    void FormulaireModification(string *nom,string *prenom,string *adresse,string *cp,string *ville);

int main()
{
    Carte Identite[5];
    int compteur = 0;
    int choix = -1;
    int choixModif();



    while(choix != 0){
        cout << "1: Ajouter" << endl;
        cout << "2: Modifier" << endl;
        cout << "3: Supprimer" << endl;
        cout << "4: Afficher" << endl;

        cin >> choix;

        cin.ignore();

        switch(choix){
        case 1:
            Ajouter(Identite,compteur);

            if(compteur < 4){
                compteur++;
            }

            break;
        case 2:
            Modifier(Identite);
            break;
        case 3:
            Supprimer(Identite);
            break;
        case 4:
            Afficher(Identite);
            break;
        default:
            break;
        }
    }
    return 0;
}

void Ajouter(Carte* carte, int compteur){

    string nom;
    string prenom;
    string adresse;
    string cp;
    string ville;

    cout << "Ajouter une identite" << endl << endl;
    cout << "Nom: " << endl;
    std::getline(cin,nom);
    cout << "Prenom: " << endl;
    std::getline(cin,prenom);
    cout << "Adresse: " << endl;
    std::getline(cin,adresse);
    cout << "Cp: " << endl;
    std::getline(cin,cp);
    cout << "Ville: " << endl;
    std::getline(cin,ville);

    carte[compteur].Set_Nom(nom);
    carte[compteur].Set_Prenom(prenom);
    carte[compteur].Set_Adresse(adresse);
    carte[compteur].Set_CP(cp);
    carte[compteur].Set_Ville(ville);
}

void Modifier(Carte *carte){

        bool terminer = false;
        int choix = 0;

        string nom,prenom,adresse,cp,ville;

        for(int i = 0; i<4;i++){
            if(carte[i].Get_Nom() != ""){
                cout << "Taper " << i+1 << " pour modifier " << carte[i].Get_Prenom() << endl;

                if(terminer == false){
                    terminer = true;
                }
            }
        }

        if(terminer == false){
            cout << "Aucne carte a modifier" << endl;
        }

        while(terminer){


            cin >> choix;

            cin.ignore();

            if(choix == 1){
                if(carte[choix-1].Get_Nom() != ""){
                    FormulaireModification(&nom,&prenom,&adresse,&cp,&ville);

                    carte[choix-1].Modifier(nom,prenom,adresse,cp,ville);

                    terminer = false;
                }else{
                    cout << "Aucune carte a modifier";
                    terminer = false;
                }
            }else if(choix == 2){
                if(carte[choix-1].Get_Nom() != ""){
                    carte[choix-1].Modifier(nom,prenom,adresse,cp,ville);
                    terminer = false;
                }else{
                    cout << "Aucune carte a modifier";
                    terminer = false;
                }
            }else if(choix == 3){
                if(carte[choix-1].Get_Nom() != ""){
                    carte[choix-1].Modifier(nom,prenom,adresse,cp,ville);
                    terminer = false;
                }else{
                    cout << "Aucune carte a modifier";
                    terminer = false;
                }
            }else if(choix == 4){
                if(carte[choix-1].Get_Nom() != ""){
                    carte[choix-1].Modifier(nom,prenom,adresse,cp,ville);
                    terminer = false;
                }
                else{
                    cout << "Aucune carte a modifier";
                    terminer = false;
                }
            }
        }
    }

void Afficher(Carte *carte){
    bool terminer = false;
    int choix = 0;



    for(int i = 0; i<4;i++){
        if(carte[i].Get_Nom() != ""){
            cout << "Taper " << i+1 << " pour afficher " << carte[i].Get_Prenom() << endl;

            if(terminer == false){
                terminer = true;
            }
        }
    }

    if(terminer == false){
        cout << "Aucne carte a afficher" << endl;
    }

    while(terminer){

        cin >> choix;

        cin.ignore();

        if(choix == 1 || choix == 2 || choix == 3 || choix == 4){
            if(carte[choix-1].Get_Nom() != ""){
                carte[choix-1].Afficher();
                terminer = false;
            }
        }
    }
}

void Supprimer(Carte *carte){
    bool terminer = false;
    int choix = 0;

    for(int i = 0; i<4;i++){
        if(carte[i].Get_Nom() != ""){
            cout << "Taper " << i+1 << " pour supprimer " << carte[i].Get_Prenom() << endl;

            if(terminer == false){
                terminer = true;
            }
        }
    }

    if(terminer == false){
        cout << "Aucne carte a supprimer" << endl;
    }

    while(terminer){

        cin >> choix;

        cin.ignore();

        if(choix == 1 || choix == 2 || choix == 3 || choix == 4){
            if(carte[choix-1].Get_Nom() != ""){
                carte[choix-1].Supprimer();
                terminer = false;
            }
        }
    }
}

int IncrementCompteur(int compteur){
    compteur++;

    return compteur;
}

void FormulaireModification(string *nom,string *prenom,string *adresse,string *cp,string *ville){
        cout << "Modifier une identite" << endl;
        cout << "Nom: " << endl;
        std::getline(cin,*nom);
        cout << "Prenom: " << endl;
        std::getline(cin,*prenom);
        cout << "Adresse: " << endl;
        std::getline(cin,*adresse);
        cout << "Cp: " << endl;
        std::getline(cin,*cp);
        cout << "Ville: " << endl;
        std::getline(cin,*ville);
}
