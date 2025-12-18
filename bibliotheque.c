#include "bibliotheque.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
// Définition d'une fonction de calcul de factorielle.
unsigned int fact( unsigned int value ) {
    unsigned int result = 1;
    while ( value > 1 ) {
    result *= value;
    value --;
    }
    return result;
}
// Définition d'une fonction d'élévation à une puissance données.
int power( int value, unsigned int pow ) {
    if ( pow == 0 ) return 1;
    if ( pow == 1 ) return value;
    int accumulator = 1;
    while( pow > 0 ) {
    accumulator *= value;
    pow--;
    }
    return accumulator;
}

//Definition d'une fonction de permutation du contenu de 2 variables
void permutation(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b =temp;
}

void secondDegreeSolver(float a, float b, float c)
{
    float discriminant = b*b - 4 *a*c;//power est deja definie plus haut
    float x1,x2;
    printf("Equation entree: %fx^2 + (%f)x +(%f) = 0\n",a,b,c);
    if (discriminant < 0)
    {
        printf("\n> Cette equation n'a pas de solution reelle.\n");
    }else if (discriminant == 0)
    {
        float x0 = -b / a*2;
        printf("\n> L'equation admet une solution reelle double x0 = %.2f\n", x0);
    }
    else
    {
        x1 = (-b - sqrt(discriminant))/(a*2);
        x2 = (-b + sqrt(discriminant))/(a*2);
        printf("L'equation admet 2 solutions reelles: x1 = %.2f  et x2 = %.2f ",x1,x2);
    }
    
}

void premierOuPas(int n)
{
    int i = 2;
    while ((i < n) && (n%i != 0 ) )
    {
        i++;
    }
    if (i == n)
    {
        printf("\n> %d est un nombre premier \n ",n);   
    }else
    printf("\n> %d n'est pas un nombre premier\n",n);
}

//definition de la fonction de calcul de la distance entre 2 points

double distance(point A, point B)
{
    double dx = B.x - A.x;
    double dy = B.y - A.y;
    double dist = sqrt(dx*dx + dy*dy);// libmath
    return dist;
}

//fonction pour formater l'entete

void entete(char* message)
{
    int i;
    printf("\n\t----------------------------------");
    for(i=0; i<strlen(message); i++) printf("-");
    printf("----------------------------------\n");

    printf("\t|                                 %s                                 |\n", message);

    printf("\t----------------------------------");
    for(i=0; i<strlen(message); i++) printf("-");
    printf("----------------------------------\n");
}
