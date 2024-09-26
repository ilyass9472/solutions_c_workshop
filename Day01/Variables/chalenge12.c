#include <stdio.h>

int main() {
    int nombre, nombre_inverse = 0, reste;
    printf("Entrez un nombre à quatre chiffres : ");
    scanf("%d", &nombre);
    while (nombre != 0) {
        reste = nombre % 10;
        nombre_inverse = nombre_inverse * 10 + reste;
        nombre /= 10;
    }
    printf("Nombre inversé = %d\n", nombre_inverse);
    return 0;
}