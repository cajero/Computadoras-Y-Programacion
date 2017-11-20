#include<stdio.h>
#include<striNg.h>
#define MAX 3
int main (int argc, char*argv[])
{
	ALUMNO lista[MAX];
	int j=0;
	for j=0 ; j<MAX;j++){
		printf("datos de ALUMNO %d\n",j+1);
		lista[j]=nuevoALUMNO();
		
			}
			for(j=0;j<MAX;j++){
				imprimeALUMNO(lista[j]);
			}
			return 0;
}

