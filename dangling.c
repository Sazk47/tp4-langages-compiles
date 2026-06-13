#include <stdio.h>
#include <stdlib.h>

int* creer_tableau(int n) {
    int *tableau = (int *) malloc(n * sizeof(int));  // heap aulieu de stack
    if (tableau == NULL) return NULL;
    for (int i = 0; i < n; i++) tableau[i] = i;
    return tableau;  // l'adresse reste valide apres la fonction
}

int main(void) {
    int *t = creer_tableau(5);
    if (t == NULL) {
        printf("Echec d'allocation\n");
        return 1;
    }

    for (int i = 0; i < 5; i++) {
        printf("t[%d] = %d\n", i, t[i]);
    }

    free(t);
    t = NULL;
    return 0;
}