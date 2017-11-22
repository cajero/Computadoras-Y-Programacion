#include<stdio.h>
int main(){
int datoleido;
ptrArchivo=fopen("datos.dat","rb");
if (ptrArchivo==NULL){
	printf("Erros al abrir el archivo\n");
}else{
	while(!feof(ptrArchivo)){
		fscanf(ptrArchivo,"%d",&datoleido);
		printf("Dato:%d\n",datoleido);
	}
fclose(ptrArchivo);
}}
