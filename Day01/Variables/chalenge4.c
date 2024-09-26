#include <stdio.h>

int main() {
    float m_per_s;
    float km_per_h;

    printf("Ecrire la valeur de la vitesse en m/s: ");
    scanf("%f", &m_per_s);

    km_per_h = m_per_s * 3.6;

    printf("La valeur de la vitesse en km/h est: %.2f\n", km_per_h); 
    return 0;
}