#include <stdio.h>
#include <math.h>
#include <complex.h>

int main() {
    float a, b, c, delta, x;
    complex double x1, x2;

    printf("entrez la valeur de a : ");
    scanf("%f", &a);
    printf("entrez la valeur de b : ");
    scanf("%f", &b);
    printf("entrez la valeur de c : ");
    scanf("%f", &c);

    delta = b * b - 4 * a * c;

    x = -b / (2 * a);
    x1 = (-b + sqrt(delta)) / (2 * a);
    x2 = (-b - sqrt(delta)) / (2 * a);

    printf("la valeur de delta est = %.2f\n", delta);

    if (delta == 0) {
        printf("x = %.2f\n", x);
    } else if (delta > 0) {
        printf("x1 = %.2f\n", x1);
        printf("x2 = %.2f\n", x2);
    } else {
        printf("x1 = %.2f + %.2fi\n", creal(x1), cimag(x1));
        printf("x2 = %.2f + %.2fi\n", creal(x2), cimag(x2));
    }

    return 0;
}