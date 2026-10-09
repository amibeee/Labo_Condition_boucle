/*
  ------------------------------------------------------------------------------
  Fichier     : nbre_1er.cpp
  Auteur(s)   : Zarif Nour El Islam
  Date        : 07/10/2026

  But         : afficher tous les nombres premiers compris entre 1 et
                une valeur limite choisie par l'utilisateur

  Remarque(s) : les erreurs de saisie ne sont pas verifiees

  Compilateur : gcc
  ------------------------------------------------------------------------------
*/

#include <iostream>
#include <iomanip>
#include <limits>
#include <cstdlib>
using namespace std;

int main() {

   const int n_col = 5;
   int  limite;
   char reponse;

   cout << "Ce programme affiche les nombres premiers entre 1 et une limite." << endl;
   cout << endl;

   do {
      // saisie de la limite entre 2 et 1000
      do {
         cout << "entrer une valeur [2-1000] : ";
         cin >> limite;
         cin.ignore(numeric_limits<streamsize>::max(), '\n');
      } while (limite < 2 || limite > 1000);

      cout << endl;
      cout << "Voici la liste des nombres premiers" << endl;

      int compteur = 0;

      for (int i = 2; i <= limite; i++) {

         bool premier = true;

         // pour optimiser pas besoin de tester les diviseurs plus grands que racine de i
         for (int j = 2; j * j <= i; j++) {
            if (i % j == 0) {
               premier = false;
               break;
            }
         }

         if (premier) {
            cout << setw(3) << i;
            compteur++;

            // retour a la ligne lorsqu'on atteint  n_col
            if (compteur % n_col == 0) {
               cout << endl;
            }
         }
      }

      cout << endl;

      // recommencer ? (seulement O ou N)
      do {
         cout << "Voulez-vous recommencer [O/N] : ";
         cin >> reponse;
         cin.ignore(numeric_limits<streamsize>::max(), '\n');
      } while (reponse != 'O' && reponse != 'N');

      cout << endl;

   } while (reponse == 'O');

   cout << "Fin de programme" << endl;

   return EXIT_SUCCESS;
}
