#include <stdio.h>

int main() {
 float a;
 float b;
 printf("entrez la valeur de a: ");
 scanf("%f",&a);
 printf("entrez la valeur de b: ");
 scanf("%f",&b);
 printf("a + b = %.2f\n",a + b);
 printf("a - b = %.2f\n",a - b);
 printf("a * b = %.2f\n",a * b);
 if (b != 0) {
        printf("a / b = %.2f\n", a / b);
    } else {
        printf("a / b = complexe infinity.\n");
    }
    return 0;
}