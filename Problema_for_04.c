/*  Hacer un diagrama de flujo que calcule e imprima el producto de los N
 primeros números naturales.



HECHO POR ROMERO SANDOVAL RODOLFO ARAGOM*/


#include <stdio.h>
#include <math.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL,"");
	
	int cont=0;
	int acum=0; 
	int lim=0;
	
	printf("Programa para que calcule e imprima el producto de los N primeros números naturales. \n");
	printf("Favor de introducir el límite de los n números naturales \n");
	scanf("%d", &lim);
	while (cont<=lim)
	{
		acum=cont+acum;

		cont=cont+1;
	}
	
	printf("\nEl producto de los N primeros números naturales es: %d \n", acum);
	
	/*NOTA: HICE LA PRUEBA PRIMERO CON 10 NÚMEROS, Y COMO FUNCIONA, ENTONCES SUPONGO QUE CON 100 TAMBIÉN FUNCIONARÁ*/
	
	return 0;
	
}
