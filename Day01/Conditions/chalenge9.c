#include <stdio.h>
#include <ctype.h>

int main() {
char alphabet;
printf("Entrez un alphabet: ");
scanf("%c", &alphabet);
if (islower(alphabet)) {
printf("%c est miniscule.\n", alphabet);
} else if (isupper(alphabet)) {
printf("%c est majuscule.\n", alphabet);
} else {
printf("%c n'est pas une lettre.\n", alphabet);
}
    return 0;
}