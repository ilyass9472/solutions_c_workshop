#include <stdio.h>

int main() {
float km;
float yards;

printf("ecrire la valeur dela distance en km: ");
scanf("%f",&km);

yards = km * 1093.61 ;

printf("la valeur de yards est : %.2f\n",yards);

    return 0;
}