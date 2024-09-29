#include <stdio.h>

int main() {
    int c, i, produit = 1;
    printf("entrez la valeur des cas : ");
    scanf("%d", &c);
    int tab[c];
    for (int i = 0; i < c; i++)
    {
        printf("tab[%d] = ", i);
        scanf("%d", &tab[i]);
        produit *= tab[i];
    }
    printf("le produit du number = %d\n", produit);
    for (int i = 0; i < c; i++) {
        printf("tab[%d] = %d\n", i, tab[i]);
    }
    
    return 0;
}