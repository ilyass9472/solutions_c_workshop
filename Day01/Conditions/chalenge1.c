#include <stdio.h>
int main() {
    int x;
    printf("Ecrire la valeur de x : ");
    scanf("%d", &x);
    printf("x / 2 = %.2f\n", x / 2.0);
    if (x % 2 == 0) {
        printf("Le nombre est pair\n");
    } else {
        printf("Le nombre est impair\n");
    }
    return 0;
}