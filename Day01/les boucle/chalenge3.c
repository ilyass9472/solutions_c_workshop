#include <stdio.h>
int main () {
int n, somme = 0, i;
printf("entrez un entier naturelle positive : ");
scanf("%d",&n);
if(n<0){
printf("loperation est impossible .\n");
}else{
    for(i = 0;i <= n;i++)
    {
       somme += i;
    }
        // somme = n*(n+1)/2;

printf("%d = %d\n", n, somme);
}

    return 0;
}