/*  Escribir un diagrama de flujo tal que dado como entrada un arreglo uni
dimensional de enteros, obtenga como resultado la suma de los mismos..



HECHO POR ROMERO SANDOVAL RODOLFO ARAGOM*/


#include <stdio.h>
#include <math.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL,"");
	
	int tam=0;
	int i=0;
	int sum=0;

	printf("Programa para que dado como entrada un arreglo unidimensional de enteros, \n obtenga como resultado la suma de los mismos\n\n\n");
    printf("Ingrese el tamaño del arreglo: \n");
    scanf("%d", &tam);

    int arreglo[tam];

    printf("\nIngrese los %d elementos del arreglo:\n", tam);
    for (i = 0; i < tam; i++) 
	{
        printf("Elemento %d: ", i + 1);
        scanf("%d", &arreglo[i]);
    }

    for (i = 0; i < tam; i++) 
	{
        sum+=arreglo[i];
    }

    printf("La suma de los elementos del arreglo es: %d\n", sum);
    
	return 0;
	
}
