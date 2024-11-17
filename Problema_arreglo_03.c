/*  Escribir un diagrama de flujo tal que dado como entrada un arreglo unidi
mensional de enteros, determinar cu´antos de ellos son positivos, negativos
o nulos.



HECHO POR ROMERO SANDOVAL RODOLFO ARAGOM*/


#include <stdio.h>
#include <math.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL,"");
	
	int n=0; 
	int i=0; 
	int positivos=0;
	int negativos=0;
	int nulos=0;

	printf("Programa tal que dado como entrada un arreglo \n unidimensional de enteros, determinar cuántos de ellos son positivos, negativos \n o nulos.\n\n\n");
     printf("Ingrese el tamaño del arreglo: ");
    scanf("%d", &n);

    int arreglo[n];

    printf("Ingrese los %d elementos del arreglo:\n", n);
    for (i = 0; i < n; i++) 
	{
        printf("Elemento %d: ", i + 1);
        scanf("%d", &arreglo[i]);
    }

    for (i = 0; i < n; i++) 
	{
        if (arreglo[i] > 0) 
		{
            positivos++;
        } 
        
		else if (arreglo[i] < 0) 
		{
            negativos++;
        } 
		
		else 
		{
            nulos++;
        }
    }

    printf("Cantidad de números positivos: %d\n", positivos);
    printf("Cantidad de números negativos: %d\n", negativos);
    printf("Cantidad de números nulos (ceros): %d\n", nulos);
    
	return 0;
	
}
