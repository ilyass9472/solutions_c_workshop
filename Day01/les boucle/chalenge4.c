#include <stdio.h>

int main() {
    int n, i;

    printf("Entrez un nombre entier positif : ");
    scanf("%d", &n);
    if (n <= 0) {
        printf("Veuillez entrer un nombre entier positif.\n");
    } else {
        printf("Les %d premiers nombres impairs sont :\n", n);
        for (i = 1; i <= n; i++) {
            printf("%d\n", 2 * i - 1);
        }
        printf("\n");
    }
    return 0;
}