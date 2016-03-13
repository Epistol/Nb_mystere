#include <iostream>    // Inclusion de fichier
#include <time.h>      // Inclusion pour la fonction time
using namespace std;   // Utilisation du namespace std

void main(void)
{
	// initialisation du hasard
    srand ( (int)time(NULL) );

	// variables :
    int nbjoueur, nbmystere;

	// nombre mystère tiré aléatoirement entre 0 et 500
    nbmystere = rand() % 501;

    // variable pour compter le nombre de tentatives
    int score = 0;

    do
    {
        cout << "Entrez une tentative (entre 0 et 500) : ";
        
		// Saisie du nombre par le joueur
		cin >> nbjoueur;
        
		// Incrémentation du nombre de tentatives
        score++;        

        // Comparaison avec le nombre mystère
        if(nbjoueur == nbmystere)
            cout << "Felicitations ! "
                 << "Vous avez trouve le nombre mystere !"
                 << endl
                 << "Vous avez eu besoin de " << score 
                 << " tentative(s)" << endl;
		else
        {
            if(nbjoueur < nbmystere)
                cout << "Plus !" << endl;
            else
                cout << "Moins !" << endl;
        }
    }
    while(nbjoueur != nbmystere);
    // Boucle tant que la joueur n'a pas
    // découvert le nombre mystère

    // Empèche le programme de se fermer directement :
    system("pause");
}


