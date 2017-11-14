#include<stdio.h>
#include<stdlib.h>
#define MAX 10
int main (int argc, char const *argv[])
{
	printf("ejemplos de punteros y arreglos","10/10/2016");
	int cals[MAX]={8,9,8,8,6,7,9,8,10,10};
	int *ptrCals;
	printf("el valor del primer elemento: %d\n",cals[0]);
	printf("direccion del primer elemento: %d\n",&cals[0]);
	printf("direccion del primer elemento: %d\n",cals);
	ptrCals=cals;
	printf("valor del primer elemento: %d\n",*ptrCals);
	return 0;
}
