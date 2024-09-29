// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int c, i, max=0;
    printf("entrez la valeur des cas : ");
    scanf("%d", &c);
    int tab[c];
    for (int i = 0; i < c; i++)
    {
        printf("tab[%d] = ", i);
        scanf("%d", &tab[i]);
       
    }
    for (int i = 0; i < c; i++)
    {
       // printf("tab[%d] = %d\n", i, tab[i]);
         if (tab[i] > max)
        {
            max = tab[i];
        }
    }
        printf("la valeur maximal est  = %d\n", max);
    return 0;
}