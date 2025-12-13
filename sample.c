#include "SampleLib.h"
#include <string.h>
#include <stdio.h>
#include<stdlib.h>
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
//Fonction d'affichage d'un tableau prealablement rempli
void afficherTableau()
{
    int array[ARRAY_SIZE];
    array[0] = 1;
    array[1] = 2;
    array[2] = 4;
    array[3] = 8;
    array[4] = 16;
    for( int i=0; i<ARRAY_SIZE; i++ ) {
        printf( "array[%d] == %d\n", i, array[i] );
    }
}


//fonction pour formater l'entete

void entete(char* message)
{
    int i;
   // system("clear");
    printf("\n\n\t----------------------------------");
    for(i=0; i<strlen(message); i++) printf("-");
    printf("----------------------------------\n");

    printf("\t|                                 %s                                 |\n", message);

    printf("\t----------------------------------");
    for(i=0; i<strlen(message); i++) printf("-");
    printf("----------------------------------\n\n");
}