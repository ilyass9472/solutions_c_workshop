#include <stdio.h>
int main() {
    double x1, y1, x2, y2, xp, yp;
    printf("Entrez l'abscisse du premier point (x1) : ");
    scanf("%lf", &x1);
    printf("Entrez l'ordonnée du premier point (y1) : ");
    scanf("%lf", &y1);
    printf("Entrez l'abscisse du deuxième point (x2) : ");
    scanf("%lf", &x2);
    printf("Entrez l'ordonnée du deuxième point (y2) : ");
    scanf("%lf", &y2);
    printf("Entrez l'abscisse du point à tester (xp) : ");
    scanf("%lf", &xp);
    printf("Entrez l'ordonnée du point à tester (yp) : ");
    scanf("%lf", &yp);
    if ((xp - x1) * (y2 - y1) == (yp - y1) * (x2 - x1)) {
      if ((xp >= x1 && xp <= x2) || (xp >= x2 && xp <= x1)) {
        if ((yp >= y1 && yp <= y2) || (yp >= y2 && yp <= y1)) {
            printf("Le point appartient au segment.\n");
            }   
        else {
            printf("Le point est aligné mais en dehors du segment.\n");
        }
        }
        else {
            printf("Le point est aligné mais en dehors du segment.\n");
        }
    }
    else {
     printf("Le point n'appartient pas au segment.\n");
    }
    return 0;
}