#include<stdio.h>
#include<stdlib.h>

int main()
{
	int a,b,c,tmp1,tmp2;
	printf("Donnez trois nombre\n");
	scanf("%d%d%d",&a,&b,&c);
	printf("a = %d b = %d c = %d\n",a,b,c);
	tmp1 = a;
	a = c;
	tmp2 = b;
	b = tmp1;
	c = tmp2;
	printf("a = %d b = %d c = %d\n",a,b,c);
	return 0;
}
