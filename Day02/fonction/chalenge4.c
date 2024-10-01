#include <stdio.h>
int min(int a, int b) {
    if (a > b) {
        return b;
    } else {
        return a;
    }
}

int main() {
    int a, b;
    printf("Entrez le premier nombre : ");
    scanf("%d", &b);

    printf("Entrez le deuxième nombre : ");
    scanf("%d", &a);

    int resultat = min(a, b);

    printf("Le plus moins nombre est : %d\n", resultat);

    return 0;
}