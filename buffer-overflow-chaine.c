#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    char *nom = (char *) malloc(10 * sizeof(char));  // 9 chars + '\0'
    if (nom == NULL) {
        printf("Echec d'allocation\n");
        return 1;
    }

    strcpy(nom, "Alexandre");
    printf("%s\n", nom);

    free(nom);
    nom = NULL;
    return 0;
}