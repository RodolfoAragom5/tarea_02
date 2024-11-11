/*Una persona invierte en un banco una determinada cantidad de dinero y
a una cierta tasa de interés mensual. Construya un diagrama de flujo que
permita obtener el monto de dinero que obtendrá al finalizar el mes.


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
	
	printf("Programa para calcular la transformación del dolar (1 dollar = 11.96 pesos) \n");
	printf("Dame la cantidad de dinero\n");
	scanf("%f",&dinero);
	printf("Dame la taza de interes mensual\n");
	scanf("%f",&taza);
	
	proceso=taza*dinero;
	total=proceso*dinero;
	
	printf("Lo obtenido al final del mes será:%f\n", total);
	
}
