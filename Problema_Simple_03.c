/*En una Casa de Cabio necesitan construir un programa que dado como
dato una cantidad expresada en d´olares, convierta esa cantidad en pesos.
Construir el diagrama de flujo correspondiente. Tomar en cuenta que:
1dolar = 11.96pesos.


HECHO POR ROMERO SANDOVAL RODOLFO ARAGOM*/


#include <stdio.h>
#include <math.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL,"");
	
	float cambio;
	float dolar;
	
	printf("Programa para calcular la transformación del dolar (1 dollar = 11.96 pesos) \n");
	printf("Dame el número de dolares\n");
	scanf("%f",&dolar);
	
	cambio=dolar*11.96;
	
	printf("La transformación en dolares es:%f\n", cambio);
	
}
