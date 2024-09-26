#include <stdio.h>

int main() {
    float temperature;
    printf("Entrez la temperature de l'eau en degre C: ");
    scanf("%f", &temperature);
    if (temperature < 0) {
        printf("La structure de l'eau est : solide\n");
    } else if (temperature >= 0 && temperature < 100) { 
        printf("La structure de l'eau est : liquide\n");
    } else { 
        printf("La structure de l'eau est : gazeux\n");
    }

    return 0;
}