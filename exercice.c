#include <stdio.h>
#include "structure.h"
#include "exercice.h"
#include "tableau.h"
#define NB_LIGNES_MAX 3
#define NB_COLONNES_MAX 4

void exercice1(){
        NombreRationnel nombre1 = demanderNombre();
        afficherNombre(nombre1);
        NombreRationnel nombre2 = demanderNombre();
        afficherNombre(nombre2);
        multiplication(nombre1, nombre2);
        addition(nombre1, nombre2);
        return 0;
    }

void exercice2(){
    remplirTableau();
    return 0;
}

void exercice3() {
    int compteur = 0;
    int tableau2[NB_LIGNES_MAX][NB_COLONNES_MAX];
    int tableau1[NB_LIGNES_MAX*NB_COLONNES_MAX];
    remplirTableau2(tableau2);
    for (int j = 0 ; j < NB_LIGNES_MAX ; j++) {
        for (int i = 0 ; i < NB_COLONNES_MAX ; i++) {
            tableau1[compteur] = tableau2[j][i];
            compteur++;
            printf("%2d" , tableau2[j][i]);
        }
        printf("\n");
    }
    afficherTableau(tableau1 , 12);
}



















