#include <stdio.h>

int main() {
    float a;
    printf("entrez la valeur de a : ");
    scanf("%f", &a);

    if (a == 0) {
        printf("la valeur de a est nulle\n");
    } else if (a < 0) {
        printf("la valeur de a est negative\n");
    } else {
        printf("la valeur est positive\n");
    }

    return 0;
}