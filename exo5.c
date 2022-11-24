#include <stdio.h>
#include <stdlib.h>

int main()
{
	int nbr1,nbr2,somme,difference,produit;
	printf("Donnez deux nombres\n");
	scanf("%d%d",&nbr1,&nbr2);
	somme = nbr1 + nbr2;
	difference = nbr1 - nbr2;
	produit = nbr1 * nbr2;
	printf("La somme est %d la difference est %d le produit est %d\n",somme,
	difference,produit);
	return 0;
	
}
