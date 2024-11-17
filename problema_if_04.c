/* Construir un diagrama de flujo que pueda determinar, dados dos números
 enteros, si un número es divisor del otro.



HECHO POR ROMERO SANDOVAL RODOLFO ARAGOM*/


#include <stdio.h>
#include <math.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL,"");
	
	int prim, seg;
	int proc;
	
	printf("si un número es divisor del otro \n");
	printf("Dame un primer número \n");
	scanf("%d",&prim);
	printf("Dame un segundo número \n");
	scanf("%d",&seg);
	
	
	if (prim%seg==0)
	{
		
		printf("Los números son divisibles entre ellos ");
	
	}
	
	else
	{
	
		printf("Los números no son divisibles entre ellos");
		
	}
	
	
	return 0;
	
}
