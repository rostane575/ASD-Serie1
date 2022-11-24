#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
int main()
{
    float A,B,C,delta,x,y;

    printf("Donner la valeur de A= \n",A);
    scanf("%f", &A);
    printf("Donner la valeur de B= \n",B);
    scanf("%f", &B);
    printf("Donner la valeur de C= \n",C);
    scanf("%f", &C);

        delta = pow(B,2)/(4*A*C);

    if(delta < 0)
        printf("Aucune solution dans R");
    else if (delta == 0)
        printf("Une seule solution :%.2f", -B/(2*A));
         else {
            x = (-B - sqrt(delta))/(2*A);
            y = (-B + sqrt(delta))/ (2*A);
            printf("Deux solution possible :%.2f et %.2f",x,y);
         }
}
