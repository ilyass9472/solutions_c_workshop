#include <stdio.h>
#include <string.h>
int est_bissextile(int annee) {
    return (annee % 4 == 0 && annee % 100 != 0) || (annee % 400 == 0);
}
int main() {
    char date[11];
    int jour, mois_num, annee;
    const char *mois_noms[] = {"Janvier", "Février", "Mars", /* ... */ "Décembre"};
    printf("Entrez une date au format JJ/MM/AAAA : ");
    scanf("%d/%d/%d", &jour, &mois_num, &annee);
    if (jour < 1 || mois_num < 1 || mois_num > 12 || annee < 0) {
        printf("Date invalide\n");
        return 1;
    }
    sprintf(date, "%d-%s-%d", jour, mois_noms[mois_num - 1], annee);
    printf("La date formatée est : %s\n", date);
    return 0;
}