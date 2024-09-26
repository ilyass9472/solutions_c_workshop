#include <stdio.h>
#include <math.h>

int main() {
    float longeur, largeur,surface;
    printf("entrez la valeur de la longeur l = ",longeur);
    scanf("%f",&longeur);
    printf("entrez la valeur de la largeur la = ",largeur);
   scanf("%f",&largeur);
surface = longeur * largeur;
printf("l àir de la rectangle est s = %.2f\n",surface);
return 0;
}