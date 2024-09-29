#include <stdio.h>

int main() {
int c, i, max;
printf("entrez le nombre des cas : ");
scanf("%d",c);
int tab[c];
for(i=0;i<c;i++){
printf("tab[%d]",i);
scanf("%d", &tab[i]);
max = max + tab[i];
}
printf("tab[%d] = %d\n",i ,tab[c]);
for (int i = 0; i < c; i++){
printf("tab[%d] = %d\n", i, tab[i]);
}

    return 0;
}