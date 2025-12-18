#ifndef __MY_MATH_LIB_H
#define __MY_MATH_LIB_H

//declation de la structure point
typedef struct
{
    float x;
    float y;
}point;



// Declaration d'une fonction de calcul de factorielle.
unsigned int fact( unsigned int value );

// Declaration d'une fonction d'élévation à une puissance données.
int power( int value, unsigned int pow );

//Declaration d'une fonction de permutation du contenu de 2 variables
void permutation(int *a, int *b);

//Declaration d'une fonction de resolution d'une equqtion de second degre
void secondDegreeSolver(float a, float b, float c);

//declaration d'une fonction pour dire si un nombre est premier ou non
void premierOuPas(int n);

//declaration de la fonction pour calculer la distance entre 2 points
double distance(point A, point B);

//declaration  de la fonction pour formater mes entetes
void entete(char* message);

#endif