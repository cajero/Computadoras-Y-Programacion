#include<stdio.h>
int main() {
int a,b,c,max,min;
printf("ingrese 3 numeros");
scanf("%d,%d,%d",&a,&b,&c);
max=a;
if(b>max)
max=b;
if(c>max)
max=c;
printf("el numero mayor es%d",max);
return 0;
}
