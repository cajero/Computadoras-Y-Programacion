struct alumnos
{
	int edad;
	char nombre[60];
	char genero;
	char carrera[25];
	char nCuenta[10];
};
typedef struct alumnos ALUMNOS;
 nuevoALUMNO() { 
	printf("introduce la  edad:");
	scanf("%d",&tmp.edad);
	
	printf("introduce el nombre:");
	fflush(stdin);
	gets(tmp.nombre);
	
	printf("introduce el genero:");
	scanf("%c",&tmp.genero);
	
	printf("introduce la carrera:");
	fflush(stdin);
	scanf(tmp.carrera);
	
	printf("introduce numero de cuenta:");
	fflush(stdin);
	gets(tmp.nCuenta);
	return tmp;
	
	#include<stdio.h>
#include<string.h>
int main (int argc, char*argv[])
{
	alumnos var1;
	var1=nuevoAlumno();
	printf("Edad:%d nombre:%s",var1.edad,var1.nombre);
	return 0;
}

