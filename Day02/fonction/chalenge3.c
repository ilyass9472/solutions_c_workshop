#include <stdio.h>
int maximum(int a, int b) {
    if (a > b) {
        return a;
    } else {
        return b;
    }
}

int main() {
    int a, b;
    printf("Entrez le premier nombre : ");
    scanf("%d", &a);

    printf("Entrez le deuxième nombre : ");
    scanf("%d", &b);

    int resultat = maximum(a, b);

    printf("Le plus grand nombre est : %d\n", resultat);

    return 0;
}