#include <stdio.h>
int main() {
const int secondesParMinute = 60;
const int minutesParHeure = 60;
const int heuresParJour = 24;
const int joursParSemaine = 7;
const float joursParMoisMoyen = 30; // Approximation
float secondes, minutes, heures, jours, semaines, mois, annees;
printf("Entrez votre âge en secondes : ");
if (scanf("%f", &secondes) != 1 || secondes < 0) {
printf("Veuillez entrer un nombre positif.\n");
return 1;
}
minutes = secondes / secondesParMinute;
heures = minutes / minutesParHeure;
jours = heures / heuresParJour;
semaines = jours / joursParSemaine;
mois = jours / joursParMoisMoyen;
annees = mois / 12;
printf("Votre âge est d'environ :\n");
printf("%.2f secondes\n", secondes);
printf("%.2f minutes\n", minutes);
printf("%.2f heures\n", heures);
printf("%.2f jours\n", jours);
printf("%.2f semaines\n", semaines);
printf("%.2f mois\n", mois);
printf("%.2f années\n", annees);
return 0;
}