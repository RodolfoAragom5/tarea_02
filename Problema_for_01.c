/* Haga un diagrama de flujo para obtener la tabla de multiplicar de un
 número entero N, comenzando desde el 1.



HECHO POR ROMERO SANDOVAL RODOLFO ARAGOM*/


#include <stdio.h>
#include <math.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL,"");
	
	int num, cont, proc;
	
	printf("Programa para obtener la tabla de multiplicar de un número entero N, comenzando desde el 1. \n");
	printf("Dame el número \n");
	scanf("%d",&num);
	
	for (cont=0;cont<10;cont++)
	{
		proc=num*cont;
		printf("%d x %d = %d \n", num,cont,proc);
		
	}
	
	
	
	return 0;
	
}
