#include <stdio.h>

int main() {
    int n, i, factorielle = 1;
    printf("Entrez un nombre entier positif : ");
    scanf("%d", &n);
    if (n < 0) {
        printf("La factorielle n'est définie que pour les entiers positifs.\n");
    } else {
        for (i = 1; i <= n; i++) {
            factorielle *= i;
        }
        printf("%d! = %d\n", n, factorielle);
    }

    return 0;
}