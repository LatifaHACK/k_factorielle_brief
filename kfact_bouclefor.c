#include <stdio.h>
int main() {
int k,i;
double produit,kfactorielle;
printf("Choisir un nombre d'entree k=");
scanf("%d",&k);
produit=1;
for(i=1;i<k+1;i++)
{
produit=produit*i;
kfactorielle=produit;
}
printf("La factorielle de k est k!=%lf",kfactorielle);
}
