#include<stdio.h>
#include<stdlib.h>
int main (int argc, char const *argv[])
{
	printf("ejemplo de punteros"," 10/10/2016");
	printf("\ncajero salazar gabriel elias");
	int a;
	a=10;
	int *puntero;
	puntero=&a;
	printf("%d\n",*puntero);
	printf("%d\n",puntero);
	printf("%d\n", a);
	printf("%d\n",&a);
	
	return 0;
}
