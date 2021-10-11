//
// Created by francois on 06/10/2021.
//

#ifndef TP5_STRUCTURE_H
#define TP5_STRUCTURE_H
typedef struct{
    int numerateur, denominateur;
}NombreRationnel;

NombreRationnel demanderNombre(void);
void afficherNombre(NombreRationnel nombre1);
NombreRationnel multiplication(NombreRationnel nombre1, NombreRationnel nombre2);
NombreRationnel addition(NombreRationnel nombre1, NombreRationnel nombre2);


#endif //TP5_STRUCTURE_H
