/*Construir un diagrama de flujo tal que dado el radio de un círculo, calcule
e imprima el área y la circunferencia. El área del círculo se calcula como
Area = pi * radio2 y la circunferencia se calcula como Circunferencia =
2 * pi * radio.


HECHO POR ROMERO SANDOVAL RODOLFO ARAGOM*/


#include <stdio.h>
#include <math.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL,"");
	
	float r;
	float pi=3.1416;
	float ar, cin;
	
	printf("Programa para calcular el área y la circunferencia de un círculo\n");
	printf("Dame el radio\n");
	scanf("%f",&r);
	
	ar=pow(r,2)*pi;
	
	cin=2*pi*r;
	
	printf("Los resultados de las operaciones son: \n Área:%f\n Perímetro:%f\n", ar, cin);
	
}
