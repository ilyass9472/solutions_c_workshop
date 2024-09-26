#include <stdio.h>
#include <math.h>

int main() {
    float volume, rayon;
    printf("entrez la valeur de le rayon r = ",rayon);
    scanf("%f",&rayon);
volume = 1.3333333333333333333 * 3.14159265359 * rayon * rayon * rayon;
printf("la valeur de la sphere est s =%.2f\n",volume);
return 0;
}