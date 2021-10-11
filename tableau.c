#include <stdio.h>
#include "tableau.h"
#define NB_ELEM_MAX 100

int remplirTableau(void) {
    int i = 0, nbElement = 0, plusGrand = 0;
    printf("Saisir le nombre d'element de votre tableau:\n");
    scanf("%d", &nbElement);
    if (nbElement > NB_ELEM_MAX) {
        printf("Saisir le nombre d'element de votre tableau:\n");
        scanf("%d", &nbElement);
    } else {
        int tableau[NB_ELEM_MAX];
        for (i = 0; i < nbElement; i++) {
            printf("Saisir un entier:\n");
            scanf("%d", &tableau[i]);

            if (plusGrand < tableau[i]) {
                plusGrand = tableau[i];

            }

        }
            printf("Le plus grand entier est %d.", plusGrand);
        }
    return 0;
}






