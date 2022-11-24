#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int nbrcopie;
    float PU;
    char beneficient [100] ;

    printf("Donner le nombre de copie :\n", nbrcopie);
    scanf("%d", &nbrcopie);

    if(nbrcopie >= 0 && nbrcopie <= 50)
        PU = 4*nbrcopie;
    else if(nbrcopie >= 51 && nbrcopie <= 100)
        PU = 3*nbrcopie;
    else
        PU = 2.5*nbrcopie;
    printf("Le prix unitaire est : %f\n", PU);
    printf("Est ce que vous etes un etudiant ?\n", beneficient);
    scanf("%s", beneficient);

    if (strcmp(beneficient,"etudiant")==0)
        PU = PU - PU*0.1;
    else
        PU;
    printf("Le prix unitaire est : %f\n", PU);
}

