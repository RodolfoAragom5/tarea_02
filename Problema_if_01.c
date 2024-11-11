/*En un negocio de productos electrodom´esticos aplican un descuento del
8% a todos aquellos clientes cuya compra es superior a $2,500. Dado como
dato el monto de la compra del cliente, calcule lo que el cliente debe pagar.
Hacer el diagrama de flujo correspondiente.



HECHO POR ROMERO SANDOVAL RODOLFO ARAGOM*/


#include <stdio.h>
#include <math.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL,"");
	
	float dinero;
	float taza;
	float proceso;
	float total;
	
	printf("Programa para calcular lo que el cliente debe pagar \n");
	printf("Dame la cantidad de dinero\n");
	scanf("%f",&dinero);
	if (dinero>=2500)
	{
		proceso=dinero*0.08;
		total=dinero-proceso;
		printf("El precio total será:%f\n", total);
	}
	
	else
	{
		printf("El precio total será:%f\n", dinero);
	}
	
	
	return 0;
	
}
