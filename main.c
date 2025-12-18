#include <stdio.h>
#include <stdlib.h>
#include "bibliotheque.h"
#include <string.h>
#include <math.h>
int main()
{
    int a, b,nombre;
    float coef1, coef2, coef3;
    point A, B;
    char choix;

    do
    {
        entete("TRAVAIL PERSONNEL DE L'ETUDIANT                ");
        entete("UE IT355: Algorithmique et Programmation C/Java");
        entete("23ENSPM0541 -- SAADIO FONGANG ROOSEVELT        ");
        printf("\t\t1. Calcul du factoriel d'un entier\n");
        printf("\t\t2. Elever un nombre a une puissance donnee\n");
        printf("\t\t3. Permuter le contenu de 2 variables en utilisant les pointeurs\n");
        printf("\t\t4. Resoudre une equation du second degree\n");
        printf("\t\t5. verifier si un nombre est premier ou pas\n");
        printf("\t\t6. Evaluer la distance entre 2 points\n");
        printf("\t\t0. Quitter le programme\n");
        printf("\n");
        printf("\tQuelle operation voulez-vous effectuer: ");
        scanf(" %c",&choix);
    switch (choix)
    {
    case '1': 
        entete("Calcul du factorielle");
        int num;
        printf("Entrer le nombre dont vous voulez le factoriel: ");
        scanf("%d",&num);
        int facto = fact(num);
        printf("> %d! = %d",num,facto);
        break;
    case '2':
        int valeur,pow;
        entete("Elévation d'un nombre à une puissance donnée");
        printf("Entrer le nombre: ");
        scanf("%d",&valeur);
        printf("Entrer sa puissance: ");
        scanf("%d",&pow);
        int result = power(valeur,pow);
        printf("> \t%d^%d = %d",valeur,pow,result);
        break;
    case '3':
        entete("permutation du contenu de 2 variables");
        printf("Entrer la valeur de la premiere variable: ");
        scanf("%d",&a);
        printf("Entrer la valeur de la deuxieme variable: ");
        scanf("%d",&b);
        printf("> Avant la permutation a = %d  b = %d\n", a, b);
        permutation(&a,&b);
        printf("> Apres la permutation a = %d  b = %d\n", a, b);
        break;
    case '4':
        entete("Resolution d'une equation du second degree");
        printf("Entrer la valeur du 1er coefficient: ");
        scanf("%f",&coef1);
        printf("Enter la valeur du second coefficient");
        scanf("%f",&coef2);
        printf("Entrer la valeur du 3e coefficient: ");
        scanf("%f",&coef3);
        secondDegreeSolver(coef1,coef2, coef3);
        break;
    case '5':
        entete("Verification si premier ou pas");
        printf("Entrer le nombre dont vous voulez verifier: ");
        scanf("%d",&nombre);
        premierOuPas(nombre);
        break;
    case '6':
        entete("Evaluer la distance entre 2 points");
        printf("Entrer les coordonnees du premier point: (abscisse ordonnee): ");
        scanf("%f %f",&A.x,&A.y);
        printf("Entrer les coordonnees du deuxieme point: (abscisse ordonnee): ");
        scanf("%f %f",&B.x,&B.y);
        float dist = distance(A,B);
        printf("\n> La distance entre les points (%.2f;%.2f) et (%.2f;%.2f) est: %.2f\n",A.x,A.y,B.x,B.y,dist);
        break;    
    case '0':
    printf("> Fin du programme :) \n\n");
    break;
    default:
        printf("Choix invalide");
        break;
    }
    } while (choix != '0');
return EXIT_SUCCESS;

}