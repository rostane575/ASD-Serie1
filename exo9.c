#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
	float x,resultat;
	printf("Donnez la valeur de x\n");
	scanf("%f",&x);
	//resultat = 7*x*x*x+5*x*x+15;
	resultat = 7*pow(x,3)+5*pow(x,2)+15;
	printf("Le resultat est %f\n",resultat);
	return 0;
}
