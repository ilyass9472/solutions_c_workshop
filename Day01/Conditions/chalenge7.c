#include <stdio.h>
#include <ctype.h>

int main() {
char alphabet;
printf("Entrez un alphabet: ");
scanf(" %c", &alphabet);
if (islower(alphabet)) {
printf("%c est miniscule.\n", alphabet);
} else {
printf("%c est majuscule.\n", alphabet);
}
return 0;
}