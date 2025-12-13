#ifndef __MY_MATH_LIB_H
#define __MY_MATH_LIB_H
#define ARRAY_SIZE 5
// Définition d'une fonction de calcul de factorielle.
unsigned int fact( unsigned int value );

// Définition d'une fonction d'élévation à une puissance données.
int power( int value, unsigned int pow );

//Declaration d'une fonction de permutation du contenu de 2 variables
void permutation(int *a, int *b);

//Declaration de d'une fonction d'affichage d'un tableau rempli en dur
void afficherTableau();

//declaration  de la fonction pour formater mes entetes
void entete(char* message);
#endif