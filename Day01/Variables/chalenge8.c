#include <stdio.h>
#include <math.h>
int main() {
   float a, b, c;
 printf("entrez la valeur de a: ");
 scanf("%f",&a);
 printf("entrez la valeur de b: ");
 scanf("%f",&b);
 printf("entrez la valeur de c: ");
 scanf("%f",&c);
 printf("(a * b * c)^(1 / 3) = %.2f\n", pow(a * b * c, 1.0 / 3.0));
    return 0;
}