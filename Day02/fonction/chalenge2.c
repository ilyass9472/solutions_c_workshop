#include <stdio.h>
float produit() {
    float x, y, p;
    printf("Entrez la valeur de x : ");
    if (scanf("%f", &x) != 1) {
        printf("Erreur lors de la lecture de x.\n");
        return -1;
    }
    printf("Entrez la valeur de y : ");
    if (scanf("%f", &y) != 1) {
        printf("Erreur lors de la lecture de y.\n");
        return -1;
    }
    p = x * y;
    printf("La somme de x et y est : %.2f\n", p);
    return p;
}
int main() {
    float resultat = produit();
    if (resultat != -1) {
        printf("Le résultat de la somme est : %.2f\n", resultat);
    }
    return 0;
}