#include <stdio.h>
int main() {
    float budget;
    int destination, nbPersonnes;
    printf("Veuillez entrer votre budget (en euros) : ");
    scanf("%f", &budget);
    printf("Choisissez votre destination :\n");
    printf("1. Plage\n");
    printf("2. Montagne\n");
    printf("3. Ville\n");
    scanf("%d", &destination);
    printf("Nombre de personnes : ");
    scanf("%d", &nbPersonnes);
    if (budget >= 1000) {
    printf("Voyage haut de gamme recommandé.\n");
    if (destination == 1 && nbPersonnes > 2) {
    printf("Une destination plage est idéale pour un groupe nombreux avec un budget confortable.\n");
    } else if (destination == 2) {
    printf("Un séjour à la montagne peut être luxueux, profitez-en !\n");
    } else {
    printf("Une ville peut offrir de nombreuses activités haut de gamme.\n");
    }
    } else if (budget >= 500) {
    printf("Voyage moyen recommandé.\n");
    if (destination == 2 && nbPersonnes <= 2) {
    printf("La montagne est une excellente option pour un couple ou un voyage en solo.\n");
    } else {
    printf("Vous pouvez trouver de bonnes options dans toutes les destinations.\n");
    }
    } else {
    printf("Voyage économique recommandé.\n");
    printf("Les villes offrent généralement de bonnes options pour les petits budgets.\n");
    }
    return 0;
}