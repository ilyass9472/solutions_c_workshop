#include <stdio.h>

int main() {
    char nom[20];
    char prenome[20];
    int age;
    char sex[20];
    char adress[30];

    printf("Entrez votre nom: ");
    scanf("%s", nom);

    printf("Entrez votre prénom: ");
    scanf("%s", prenome);

    printf("Entrez votre âge: ");
    if (scanf("%d", &age) != 1 || age <= 0) {
        printf("L'âge doit être un nombre positif.\n");
        return 1;
    }

    printf("Entrez votre sexe: ");
    scanf("%s", sex);

    printf("Entrez votre adresse email: ");
    scanf("%s", adress);

    printf("\nVos informations :\n");
    printf("Nom: %s\n", nom);
    printf("Prénom: %s\n", prenome);
    printf("Âge: %d ans\n", age);
    printf("Sexe: %s\n", sex);
    printf("Adresse email: %s\n", adress);

    return 0;
}
