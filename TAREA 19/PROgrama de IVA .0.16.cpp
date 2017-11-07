#include <stdio.h>
#include <stdlib.h>
int main()
{
	float r, x, iva ;
	printf("introduce el precio  de un producto:");
	scanf("%f",&x);
	iva=(16*x/100);
	r=x-iva;
	printf("\n el precio con iva es de :%f\n\n",x+iva);
	printf("\n el precio sin iva es de :%f\n\n",r);
	system ("pause");
	return 0;
	}
