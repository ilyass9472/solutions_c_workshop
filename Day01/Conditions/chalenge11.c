#include <stdio.h>
int dayOfWeek(int d, int m, int y) {
  int y0, x, m0, d0;
  y0 = y - (m < 3);
  x = y0 + y0/4 - y0/100 + y0/400;
  m0 = m + 12 * (y0 < y) - 2;
  d0 = (d + x + 31 * m0 / 12) % 7;
  return d0;
}
int main() {
  int day, month, year;
  printf("Enter the day (1-31): ");
  scanf("%d", &day);
  printf("Enter the month (1-12): ");
  scanf("%d", &month);
  printf("Enter the year: ");
  scanf("%d", &year);
  int result = dayOfWeek(day, month, year);
  switch (result) {
    case 0: printf("Sunday\n"); break;
    case 1: printf("Monday\n"); break;
    case 2: printf("Tuesday\n"); break;
    case 3: printf("Wednesday\n"); break;
    case 4: printf("Thursday\n"); break;
    case 5: printf("Friday\n"); break;
    case 6: printf("Saturday\n"); break;
  }
  return 0;
} //apres la recherche (3h) dans un probleme j`ai découvert un relation specifique qui s`apelle zeller congruence theorem 
// la relation : h = ( q + [(13*(m+1))/5] + K + [K/4] + [J/4] + 5*J ) modulle 