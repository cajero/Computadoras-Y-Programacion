#include<stdio.h>
#include<string.h>
int main (int argc, char* argv[])
{
	Alumno var1;
	var1=nuevoAlumno();
	printf("Edad:%d nombre:%s",var1.edad,var1.nombre);
	return 0;
	
}

