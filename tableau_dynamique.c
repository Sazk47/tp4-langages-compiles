#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int n;

    printf("Combien d'entiers voulez-vous stocker ? ");
    scanf("%d", &n);

    int *tab = (int *) malloc(n * sizeof(int));
    if (tab == NULL) {
        printf("Echec d'allocation\n");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        printf("Valeur %d : ", i + 1);
        scanf("%d", &tab[i]);
    }

    printf("\nValeurs saisies : ");
    for (int i = 0; i < n; i++) {
        printf("%d ", tab[i]);
    }
    printf("\n");

    int somme = 0;
    for (int i = 0; i < n; i++) {
        somme += tab[i];
    }
    double moyenne = somme / (double)n;

    printf("Somme   : %d\n", somme);
    printf("Moyenne : %.2f\n", moyenne);

    free(tab);
    tab = NULL;

    return 0;
}