/*Problea simple 1.-
Escriba un diagrama de flujo tal que dado como datos dos números y
calcular la suma, resta y multiplicaci´on de dichos números.

HECHO POR ROMERO SANDOVAL RODOLFO ARAGOM*/


#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL,"");
	
	int a, b;
	int sum, res, mult, div;
	
	printf("Programa para realizar las cuatro operaciones básicas\n");
	printf("Suma\nResta\nMultiplicación\nDivisión\n");
	printf("Dame un número\n");
	scanf("%d",&a);
	printf("\nDame otro número\n");
	scanf("%d",&b);
	
	sum=a+b;
	res=a-b;
	mult=a*b;
	div=a/b;
	
	printf("Los resultados de las operaciones son: %d\n%d\n%d\n%d\n", sum, res, mult, div);
	
}
