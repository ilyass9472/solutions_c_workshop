#include <stdio.h>

int main() {
    int c, i, somme = 0;
    printf("entrez la valeur des cas : ");
    scanf("%d", &c);
    int tab[c];
    for (int i = 0; i < c; i++) {
        printf("tab[%d] = ", i);
        scanf("%d", &tab[i]);
        somme = somme + tab[i];
    }
    printf("la somme des number = %d\n", somme);
    for (int i = 0; i < c; i++) {
        printf("tab[%d] = %d\n", i, tab[i]);
    }
    return 0;
}