#include <stdio.h>
int main() {
    int a, n, resultat = 1;
    printf("Entrez un nombre entier positif a : ");
    scanf("%d", &a);
    printf("Entrez l'exposant n : ");
    scanf("%d", &n);
    if (n < 0) {
        printf("Entrez un nombre entier positif n \n");
    } else if (n == 0) {
        resultat = 1;
    } else {
        for (int i = 1; i <= n; ++i) {
            resultat *= a;
        }
    }
    printf("%d élevé à la puissance %d est égal à %d\n", a, n, resultat);
    
    return 0;
}