#include <stdio.h>
#include <math.h>

double exp_taylor(double x, int n) {
    double term, sum = 1.0;
    int i;
    for (i = 1; i <= n; ++i) {
        term = pow(x, i) / tgamma(i + 1);
        sum += term;
    }
    return sum;
}
int main() {
    double x, result;
    int n = 10;
    printf("Entrez la valeur de x : ");
    scanf("%lf", &x);
    result = exp_taylor(x, n);
    printf("Approximation de e^%lf (avec %d termes) : %lf\n", x, n, result);
    printf("Valeur exacte (environ) : %lf\n", exp(x));
    
    return 0;
}
// les serie de taylor se forme une boucle exp(i)s