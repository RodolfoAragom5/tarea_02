/*Dado como dato el sueldo de un trabajador considere un aumento del
15% si un sueldo es inferior a $1,000 y de un 12% en caso contrario.
Imprimir el sueldo con el aumento incorporado. Hacer el diagrama de
flujo correspondiente.



HECHO POR ROMERO SANDOVAL RODOLFO ARAGOM*/


#include <stdio.h>
#include <math.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL,"");
	
	float sueldo;
	float proceso;
	float total;
	
	printf("Programa para calcular lo que el cliente debe pagar \n");
	printf("Dame la cantidad de tu sueldo\n");
	scanf("%f",&sueldo);
	if (sueldo<1000)
	{
		proceso=sueldo*0.15;
		total=sueldo+proceso;
		printf("El sueldo a pagar será:%f\n", total);
	}
	
	else
	{
		proceso=sueldo*0.12;
		total=sueldo+proceso;
		printf("El sueldo a pagar será:%f\n", total);
	}
	
	
	return 0;
	
}
