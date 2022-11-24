#include<stdio.h>
#include<stdlib.h>
#include<math.h>


int main()
{
	float x,resultat;
	printf("Donnez la valeur de x\n");
	scanf("%f",&x);
	resultat = abs(x);
	printf("La valeur absolue de x est %f\n",resultat);
	return 0;
}
