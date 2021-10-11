#include <stdio.h>
#include "structure.h"
#include "exercice.h"
#include "tableau.h"

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

















