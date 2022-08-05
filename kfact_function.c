#include <stdio.h>
double factorielle( int k){
   int i;
   double produit,kfactorielle;
   produit=1;
for(i=1;i<k+1;i++)
{
    produit=produit*i;
    kfactorielle=produit;
  }
  return kfactorielle;
}
int main() 
{
  int k;
  printf("Choisir un nombre d'entree k=");
  scanf("%d",&k);
  printf("La factorielle de n est k!=%lf",factorielle(k));
}