#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAXcontact 100
#define MAXELEMENTS 4
#define MAXCHAR 100

char contact[MAXcontact][MAXELEMENTS][MAXCHAR]; 
int contactCount = 0;

int ajoutercontact() {
    system("cls");
    if (contactCount >= MAXcontact) {
        printf("\nla liste de contact est saturee\n");
        return 1;
    }
    printf("_________________________________________\n");
    printf("| 1. |  nom du contact: ");
    scanf("%s", contact[contactCount][0]);
    printf("_________________________________________\n");
    printf("2. Gsm du contact: ");
    scanf("%s", contact[contactCount][1]);
    printf("_________________________________________\n");
    printf("3. Surnom du personne : ");
    scanf("%s", contact[contactCount][2]);
    printf("_________________________________________\n");
    printf("4. email adress: ");
    scanf("%s", contact[contactCount][3]);
    printf("_________________________________________\n");

    contactCount++; 
    printf("\ncontact ajoute est validee\n");
    return 0;
}

int affichercontact() {
    checkcontacts();
    for (int i = 0; i < contactCount; i++) {
        printf("____________________________________________\n");
        printf("|                                           |\n");
        printf("|                 contact                   |\n");
        printf("|___________________________________________|\n");
        printf("|   |                                       |\n");
        printf("| 1 |  contact %d:                          |\n", i + 1);
        printf("|___|_______________________________________|\n");
        printf("|   |                                       |\n");
        printf("| 2 |  nom    : %s                          |\n", contact[i][0]);
        printf("|___|_______________________________________|\n");
        printf("|   |                                       |\n");
        printf("| 3 |  Gsm   : %s                           |\n", contact[i][1]);
        printf("|___|_______________________________________|\n");
        printf("|   |                                       |\n");
        printf("| 4 |  Surnom     : %s                      |\n", contact[i][2]);
        printf("|___|_______________________________________|\n");
        printf("|   |                                       |\n");
        printf("| 5 |  email  : %s                          |\n", contact[i][3]);
        printf("|___|_______________________________________|\n");
    }
    return 0;
}

int recherchercontact() {
    checkcontacts();
    char nom[MAXCHAR];
    printf("Enter  le nom de la contact Pour la rechercher : ");
    scanf("%s", nom);

    for (int i = 0; i < contactCount; i++) {
        if (strcmp(contact[i][0], nom) == 0) {
            printf("\nsolution : \n");
            printf("contact %d:\n", i + 1);
            printf("|__nom    : %s\n", contact[i][0]);
            printf("|__Gsm   : %s\n", contact[i][1]);
            printf("|__Surnom     : %s\n", contact[i][2]);
            printf("|__email  : %s\n\n", contact[i][3]);
            return 0;
        }
    }
    printf("\n Aucun résultat trouvé  \n");
    return 1;
}

int metreaJourrcontact() {
    checkcontacts();
    char nom[MAXCHAR];
    printf("Enter le nom du contact Pour metre a jour : ");
    scanf("%s", nom);
    
    for (int i = 0; i < contactCount; i++) {
        if (strcmp(contact[i][0], nom) == 0) {
            printf("contact %d:\n", i + 1);
            printf("|__nom    : %s\n", contact[i][0]);
            printf("|__Gsm   : %s\n", contact[i][1]);
            printf("|__Surnom     : %s\n", contact[i][2]);
            printf("|__email  : %s\n\n", contact[i][3]);
            printf("Enter New email : ");
            scanf("%s", contact[i][3]);
            printf("entrer leneveau number (Gsm) : ");
            scanf("%s", contact[i][1]);
            printf("\nle Changement est validee \n");
            return 0;
        }
    }
    printf("\nAucun résultat trouvé\n");
    return 1;
}

int supprimercontact() {
    checkcontacts();
    char nom[MAXCHAR];
    printf("Entez le nom du contact tu peu supprimer : ");
    scanf("%s", nom);

    for (int i = 0; i < contactCount; i++) {
        if (strcmp(contact[i][0], nom) == 0) {
            printf("contact %d:\n", i + 1);
            printf("|__nom   : %s\n", contact[i][0]);
            printf("|__Gsm   : %s\n", contact[i][1]);
            printf("|__Surnom   : %s\n", contact[i][2]);
            printf("|__email : %s\n\n", contact[i][3]);
            char sur[MAXCHAR];
            printf("Es-tu sur  (oui/non)? ");
            scanf("%s", sur);
            if (strcmp(sur, "oui") == 0 || strcmp(sur, "Oui") == 0) {
                for (int index = i; index < contactCount - 1; index++) {
                    strcpy(contact[index][0], contact[index + 1][0]);
                    strcpy(contact[index][1], contact[index + 1][1]);
                    strcpy(contact[index][2], contact[index + 1][2]);
                    strcpy(contact[index][3], contact[index + 1][3]);
                }
                contactCount--;
                printf("lauperation est validee\n");
            }
            return 0;
        }
    }
    printf("\n aucun resultat trouvee\n");
    return 1;
}

int checkcontacts(){
    system("cls");
    if (contactCount == 0) {
        printf("\n aucun resultat trouvee.\n");
        return 1;
    }
}

int terminal() {
    system("cls");
    int choice;
    while (1) {
        
        printf("______________________(^__^)(^__^)___________________\n");
        printf("|                                                    |\n");
        printf("| Systeme de Gestion de contacts dans une notbook    |\n");
        printf("|____________________________________________________|\n");
        printf("| 1 | Ajouter un contact au card.                    |\n");
        printf("|____________________________________________________|\n");
        printf("| 2 | Afficher tous les contact disponibles.         |\n");
        printf("|____________________________________________________|\n");
        printf("| 3 | Rechercher un contact par son nom.             |\n");
        printf("|____________________________________________________|\n");
        printf("| 4 | Mettre a jour la email  d'un contact.          |\n");
        printf("|____________________________________________________|\n");
        printf("| 5 | Supprimer un contact dans la card.             |\n");
        printf("|____________________________________________________|\n");
        printf("| 6 | Afficher le nombre total du contact en la card.|\n");
        printf("|___________________(^__^)(^__^)_____________________|\n");
        printf("\n>>> ");
        scanf("%i", &choice);

        switch (choice) {
            case 1:
                ajoutercontact();
                break;
            case 2:
                affichercontact();
                break;
            case 3:
                recherchercontact();
                break;
            case 4:
                metreaJourrcontact();
                break;
            case 5:
                supprimercontact();
                break;
            case 6:
                printf("\nNombre total de contact en card est: %d\n", contactCount);
                break;
            default:
                printf("\nCommande non trouvee ou La méthode de saisie est incorrecte\n");
        }
    }
}

int main() {
    terminal();
    return 0;
}