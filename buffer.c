#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int *tab = (int *) malloc(5 * sizeof(int));
    if (tab == NULL) {
        printf("Echec d'allocation\n");
        return 1;
    }

    for (int i = 0; i < 5; i++) {  // < au lieu de <=
        tab[i] = i * 10;
    }

    for (int i = 0; i < 5; i++) {
        printf("tab[%d] = %d\n", i, tab[i]);
    }

    free(tab);
    tab = NULL;
    return 0;
}