#include <stdio.h>
#include <stdlib.h>

int main()
{

		
		
	int p=3;
	
	int opcion, a, b, c, r;// declare una variable mas para alcenar el resultado
	
	while (opcion!=3){
	
if (opcion!=2){
		
			printf("introduce el primer numero");
				scanf("%d",&a);
			printf("introduce el segundo numero");
				scanf("%d",&b);
				
			printf("\n1.sumar\n");
			printf("2.restar\n");
			printf("3.acabar el programa\n");
			printf("seleccione opereacion\n");
				scanf("%d",&opcion);//falto el: & -> scanf("%d",opcion) 
		}
	
		switch (opcion){
			
			case 1: 
				c=a+b;//hacer la operacion en otro apartado
				printf("el resultado de la suma es :%d\n",c);//problemas con la operacion
		
			break;
			
			case 2:
				c=a-b;
				printf("el resultado de la resta es :%d\n",c);
			
			break;
			
		//agregar el default
		
			 
			
		}
	
	}//fin de while
	
	
system("PAUSE");
return 0;
}

