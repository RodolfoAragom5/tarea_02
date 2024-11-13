/*Hacer un diagrama de flujo para calcular el precio de un ticket ida y vuelta
 en ferrocarril, conociendo la distancia de ida y el tiempo de estancia.
 También se sabe que si el numero de días de estancia es mayor a 7 y la
 distancias total (ida y vuelta) a recorrer es mayor a 800 km, el ticket tiene
 un descuento del 30%. El precio por km es de $0.23



HECHO POR ROMERO SANDOVAL RODOLFO ARAGOM*/


#include <stdio.h>
#include <math.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL,"");
	
	float distancia;
	float dias;
	float proce_total;
	float proce_og;
	float desc;
	float total;
	
	printf("Programa para calcular el costo del boleto de viaje en el tren \n");
	printf("Dame la cantidad de kilómetros que viajaste o viajarás\n");
	scanf("%f",&distancia);
	printf("Dame la cantidad de días que viajaste o viajarás\n");
	scanf("%f",&dias);
	if (distancia>=800)
	{
		if(dias>=7)
		{
		proce_og=distancia*0.23;
		desc=proce_og*0.30;
		proce_total=proce_og-desc;
		printf("El precio a pagar será:%f\n", proce_total);
		}
		else
		{
			proce_og=distancia*0.23;
			printf("El precio a pagar será:%f\n", proce_og);
		}
	}
	
	else
	{
		proce_og=distancia*0.23;
		printf("El precio a pagar será:%f\n", proce_og);
	}
	
	
	return 0;
	
}
