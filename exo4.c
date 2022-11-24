#include <stdio.h>
#include <stdlib.h>
//#include <math.h>

int main()
{
	int carre, nbr;
	printf("Donnez un nombre\n"); 
	scanf("%d",&nbr);
	carre = nbr*nbr; //carre=pow(nbr,2);
	printf("le carre du nombre donnee est %d\n",carre);
	return 0;
}
