#include<stdio.h>
#include <stdlib.h>
main(){
int c,i,j;
printf("Inserta el lado del cuadrado:\n ");
scanf("%d",&c);
for(i=1;i<=c;i++){
	if (i==1 || i==c)
	for(j=1;j<=c;j++){
		printf("*");
		}
		else
		{
		{
			printf("*");
			}
			for(j=1;j<=c-2;j++)
			printf(" ");
			printf("*");
			}
			printf("\n");

}
system("PAUSE");
return 0;
}
