/* Construya un diagrama de flujo que lea 100 números naturales y cuente
 cuántos de ellos son positivos, negativos o nulos.



HECHO POR ROMERO SANDOVAL RODOLFO ARAGOM*/


#include <stdio.h>
#include <math.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL,"");
	
	int num, cont;
	int posi=0; 
	int nega=0; 
	int nulo=0;
	
	printf("Programa para que lea 100 números naturales y cuente cuántos de ellos son positivos, negativos o nulos. \n");
	for (cont=0;cont<100;cont++)
	{
		printf("Dame un número \n");
		scanf("%d",&num);
		if (num!=0)
		{
			if (num>0)
			{
				posi=posi+1;
			}
			else
			{
				nega=nega+1;
			}
		}
		else
		{
			nulo=nulo+1;
		}
	}
	
	printf("Hay %d positivos, %d negativos y  %d nulos \n", posi,nega,nulo);
	
	/*NOTA: HICE LA PRUEBA PRIMERO CON 10 NÚMEROS, Y COMO FUNCIONA, ENTONCES SUPONGO QUE CON 100 TAMBIÉN FUNCIONARÁ*/
	
	return 0;
	
}
