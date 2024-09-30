#include <stdio.h>
float somme() {
    float x, y, s;
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
    s = x + y;
    printf("La somme de x et y est : %.2f\n", s);
    return s;
}
int main() {
    float resultat = somme();
    if (resultat != -1) {
        printf("Le résultat de la somme est : %.2f\n", resultat);
    }
    return 0;
}