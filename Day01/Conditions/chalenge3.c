#include <stdio.h>

int main() {
float a, b;
printf("entrez la valeur de a = ");
scanf("%f",&a);
printf("entrez la valeur de b = ");
scanf("%f",&b);
printf("a + b = %.2f\n",a + b);
if(a == b){printf("a + b + a + b + a + b  = %.2f\n",a + b + a + b + a + b);}
 
    return 0;
}