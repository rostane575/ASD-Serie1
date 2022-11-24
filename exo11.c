#include<stdio.h>
#include<stdlib.h>

int main()
{
	int a,b;
	printf("Donnez deux valeurs\n");
	scanf("%d%d",&a,&b);
	if(a>=b) {printf("Le min est %d\n",b);}
	else {printf("le min est %d\n",a);}
	return 0;
}
