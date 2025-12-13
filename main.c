#include <stdio.h>
#include <stdlib.h>
#include "SampleLib.h"
#include <string.h>
int main()
{
    int choix;
    do
    {
        //system("clear");
        entete("Menu des differents Echantillons de programmes etudies en cours");
        entete("UE IT355: Algorithmique et programmation");
        printf("\t\t\t1. Calcul du factoriel d'un entier\n");
        printf("\t\t\t2. Elever un nombre a une puissance donnee\n");
        printf("\t\t\t3. Permuter le contenu de 2 variables en utilisant les pointeurs\n");
        printf("\t\t\t4. Afficher un tableau prealablement rempli\n");
        printf("\t\t\t0. Quitter le programme\n");
        printf("\n");
        printf("\t\t\tQuelle operation voulez-vous effectuer: ");
        scanf("%d",&choix);
    switch (choix)
    {
    case 1: 
        //system("clear");
        entete("Calcul du factorielle");
        int num;
        printf("Entrer le nombre dont vous voulez le factoriel: ");
        scanf("%d",&num);
        int facto = fact(num);
        printf("> !%d = %d",num,facto);
        break;
    case 2:
    //system("clear");
        int valeur,pow;
        entete("Elévation à une puissance donnée");
        printf("Entrer le nombre: ");
        scanf("%d",&valeur);
        printf("Entrer sa puissance: ");
        scanf("%d",&pow);
        int result = power(valeur,pow);
        printf("> \t%d^%d = %d",valeur,pow,result);
        break;
    case 3:
    //system("clear");
        int a ,b;
        entete("permutation du contenu de 2 variables");
        printf("Entrer la valeur de la premiere variable: ");
        scanf("%d",&a);
        printf("Entrer la valeur de la deuxieme variable: ");
        scanf("%d",&b);
        printf("> Avant la permutation a = %d  b = %d\n", a, b);
        permutation(&a,&b);
        printf("> Apres la permutation a = %d  b = %d\n", a, b);
        break;
    case 4:
    //system("clear");
        entete("Affichage d'un tableau prealablement rempli");
        afficherTableau();
        break;
    case 0:
    printf("> Fin du programme :) \n\n");
    break;
    default:
        printf("Choix invalide");
        break;
    }
    } while (choix != 0);

// int result = power( 2, 3 );
// printf( "2³ == %d\n", result );
// result = fact( 6 );
// printf( "6! == %d\n", result );
return EXIT_SUCCESS;

}