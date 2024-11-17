/*  Construir un diagrama de flujo para almacenar en un arreglo unidimensional 
los 100 primeros números pares. Imprimir al final el arreglo.



HECHO POR ROMERO SANDOVAL RODOLFO ARAGOM*/


#include <stdio.h>
#include <math.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL,"");
	
	int arreglo[100];
	int i;

	printf("Programa para almacenar en un arreglo unidimensional \n los 100 primeros números pares. Imprimir al final el arreglo.\n\n\n");
     for (i=0;i<100;i++) 
	 {
        arreglo[i]=(i+1)*2;
    }

    printf("Los primeros 100 números pares son:\n");
    for (i=0;i<100;i++) 
	{
        printf("%d ", arreglo[i]);
    }
    printf("\n");

	return 0;
	
}
