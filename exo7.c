#include <stdio.h>
#include <stdlib.h>

int main()
{
	int nbr1,nbr2,tmp;
	printf("Donnez deux nombres\n");
	scanf("%d%d",&nbr1,&nbr2);
	printf("La valeur de nbr1 est %d La valeur de nbr2 est %d\n",nbr1,nbr2);
	tmp = nbr1;
	nbr1 = nbr2;
	nbr2 = tmp;
	printf("La valeur de nbr1 est %d La valeur de nbr2 est %d\n",nbr1,nbr2);
	return 0;
}
