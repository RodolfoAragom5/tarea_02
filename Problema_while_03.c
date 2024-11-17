/* Hacer un diagrama de flujo que calcule la suma de los números pares
 comprendidos entre el 10 y 50.



HECHO POR ROMERO SANDOVAL RODOLFO ARAGOM*/


#include <stdio.h>
#include <math.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL,"");
	
	int cont=10;
	int acum=0; 
	
	printf("Programa para que calcule la suma de los números pares comprendidos entre el 10 y 50. \n");
	while (cont<=50)
	{
		if (cont%2)
		{
			
			acum=cont+acum;
			
			
		}
		
		else
		{
			/*NADA*/
		}
		cont=cont+1;
	}
	
	printf("La suma de los números pares comprendidos entre el 10 y 50 es: %d \n", acum);
	
	/*NOTA: HICE LA PRUEBA PRIMERO CON 10 NÚMEROS, Y COMO FUNCIONA, ENTONCES SUPONGO QUE CON 100 TAMBIÉN FUNCIONARÁ*/
	
	return 0;
	
}
