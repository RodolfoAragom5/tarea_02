/*  construya un programa tal que dado como entrada un arreglo unidimensional 
de enteros y un número entero, determine cuántas veces se encuentra
el número dentro del arreglo



HECHO POR ROMERO SANDOVAL RODOLFO ARAGOM*/


#include <stdio.h>
#include <math.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL,"");
	
	int a=0;
	int i=0; 
	int num=0; 
	int conta=0;

	printf("que dado como entrada un arreglo unidimensional \nde enteros y un número entero, determine cuántas veces \nse encuentra el número dentro del arreglo\n\n\n");
    printf("Ingrese el tamaño del arreglo: ");
    scanf("%d", &a);

    int arreglo[a];

    printf("Ingrese los %d elementos del arreglo:\n", a);
    for (i=0;i<a;i++) 
	{
        printf("Elemento %d: ", i+1);
        scanf("%d", &arreglo[i]);
    }

    printf("Ingrese el número a buscar: ");
    scanf("%d", &num);

    for (i=0;i<a;i++) 
	{
        if (arreglo[i] == num) 
		{
            conta++;
        }
    }

    // Mostrar el resultado
    printf("El número %d aparece %d veces en el arreglo.\n", num, conta);
    
	return 0;
	
}
