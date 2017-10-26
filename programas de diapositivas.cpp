#include<stdio.h>
#include<stdlib.h>
int main (){
printf("tipos de datos y direcciones de memoria ","19/10/2014");
letra ="a";
unsigned char letra extendida = "a";
short entero corto=10;
int entero=30123;
unsigned int enterolargo=2345898898;
float decimal=11.4f;
double decimal dobleprec= 12.99989d;
printf("valor:%C direccion:%x,tamaño:%dByte(s)\n",letra,&letra,sizeof(letra));
printf("valor:%c direccion:%x,tamaño:%dByte(s)\n",letraextendida,&letraextendida,sazeof(letraextendida));
system("pause");
return 0;

}
