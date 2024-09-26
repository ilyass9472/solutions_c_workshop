#include <stdio.h>

int main() {
    float note;
    printf("entrez la note : ");
    scanf("%f", &note);
    if (12 > note && note >= 10) {
    printf("la mention est passable\n");
    } else if(14 > note && note >= 12) {
    printf("la mention est asez bien\n");
    } else if (16 > note && note >= 14) {
    printf("la mention est bien\n");
    } else if (18 > note && note >= 16) {
    printf("la mention est tres tres bien\n");
    } else if (20 > note && note >= 18) {
    printf("la mention est tres excellente\n");
    } else 
    {printf("La note est inférieure à 10\n");
    }

    printf("la note est : %.2f\n", note);

    return 0;
}