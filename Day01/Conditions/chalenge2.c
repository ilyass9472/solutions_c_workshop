#include <stdio.h>
#include <ctype.h>
int main() {
    char caractere;

    printf("Saisissez un caractère : ");
    scanf(" %c", &caractere);
    caractere = tolower(caractere);
    if (caractere == 'a' || caractere == 'e' || caractere == 'i' || caractere == 'o' || caractere == 'u' || caractere == 'y') {
        printf("Le caractère est une voyelle.\n");
    } else {
        printf("Le caractère n'est pas une voyelle.\n");
    }
    return 0;
}
