#include<stdio.h>
#include<stdlib.h>

int main()
{
	int a,b,c;
	printf("Donnez trois nombres\n");
	scanf("%d%d%d",&a,&b,&c);
	if(a>=b && c>=b) 
	{printf("Le min est %d\n",b);}
	else 
	{	if(b>=a && c>=a)
		{printf("le min est %d\n",a);}
		else
		{
			if(b>=c && a>=c)
			{printf("le min est %d\n",c);}
		}
	}
	return 0;
}
