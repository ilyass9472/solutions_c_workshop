#include <stdio.h>

int main()
{
    float degree;
    float kelvin;
    printf("ecrire la valeur de c: ");
    scanf("%f", &degree);
    kelvin = degree + 273.15;
    printf("la valeur de kelvin est : %.2f\n", kelvin);
    return 0;
}