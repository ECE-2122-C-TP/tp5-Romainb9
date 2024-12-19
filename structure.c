#include <stdio.h>
#include "structure.h"
//fonction qui demande un nombre rationnel
//OUT: Un nombre rationnel
NombreRationnel demanderNombre(void) {
    NombreRationnel nombre1;
    printf("Veuillez rentrer le numerateur et le denominateur:\n");
    scanf("%d %d", &nombre1.numerateur, &nombre1.denominateur);
    return nombre1;
}


//Fonction qui affiche un nombre rationnel
//IN: La valeur d'entrée est un nombre rationnel
void afficherNombre(NombreRationnel nombre1){
    printf("le nombre rationnel est %d / %d.\n", nombre1.numerateur, nombre1.denominateur);
}
//Fonction qui multiplie deux rationnel
//IN: Les deux valeurs d'entrée sont des nombres rationnel
//OUT:l'unique valeur de sortie est un nombre rationnel
NombreRationnel multiplication(NombreRationnel nombre1, NombreRationnel nombre2){
    int numerateur = nombre1.numerateur * nombre2.numerateur;
    int denominateur = nombre1.denominateur * nombre2.denominateur;
    printf("La multiplication des deux rationnels est egale a %d/%d\n", numerateur, denominateur);
}
//Fonction qui additionne deux entier rationnel
//IN: Les 2 valeurs d'entrée sont des rationnels
//OUT: La valeur de sortie est un rationnel.
NombreRationnel addition(NombreRationnel nombre1, NombreRationnel nombre2){
    int numerateur = nombre1.numerateur*nombre2.denominateur + nombre2.numerateur*nombre1.denominateur;
    int denominateur = nombre1.denominateur*nombre2.numerateur;
    printf("la somme des deux rationnels est egale a %d/%d", numerateur, denominateur);

}


