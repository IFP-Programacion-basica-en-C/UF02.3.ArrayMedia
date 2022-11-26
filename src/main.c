/*	Autor: Paula Martins de Sousa		Fecha de creación: 24/11/2022  */

/*
**	ENUNCIADO DEL PROGRAMA
**	Se desea realizar un programa en C que declare un array de máximo 10 elementos, 
junto a la variable de control de elementos (numE). 
Para ello, el main principal, pedirá al usuario cuantos elementos quiere introducir 
(entre 1 y 10) que se debe controlar con una función “pideNumEntreRango”. 
Se debe hacer un procedimiento que inicialice el vector con la cantidad de números 
introducidos por el usuario (“inicialitzarVector”).
Posteriormente muestra el array a través del procedimiento: “pintaVector”.
Una vez hecho, hacer función en C llamada “mediaArray”, que reciba como 
parámetros el array con números junto su numE, y devuelva la media de los números 

que tiene el array. 
El main principal debe mostrar la media por pantalla.
**
*/

#include <stdio.h>
#define MAXARRAY 10
int pideNumEntreRango(int, int);
int pideNum(int);
void inicialitzarVector(int [],int);
void pintaVector (int[], int);
// int mediaArray (int [], int);

int main(){

	
	int vArray[MAXARRAY];
	int numE;
	// float media;

	printf("BIENVENIDOS AL PROGRAMA ARRAY MEDIA:\n");
	numE = pideNumEntreRango(1,MAXARRAY);
	inicialitzarVector(vArray, numE);
	pintaVector (vArray, numE);
	// int mediaArray (vnum, numE);

	getch();
	
	return 0;
}

pideNumEntreRango(int min, int max)
{
int num;

printf("Introduce cuantos elementos quieres en el vector (1-10): ");
scanf("%d", &num);
 
while (num < min || num > max)
{
	printf("\nEl numero no esta dentro del rango.\n");
	printf("Introduce cuantos elementos quieres en el vector (1-10): ");
	scanf("%d", &num);

}
return num;


}

void inicialitzarVector( int v[], int num)
{
printf("INICIALIZACION DEL ARRAY:\n\n");



for (int i=0; i<num; i++)
{
printf("Introduce numero para la posicion %d del array: ", i);
scanf("%d", &v[i]);
fflush(stdin);
}
printf("\nArray inicializado.\n");

}


void pintaVector (int vArray[MAXARRAY], int numE)
{

printf("\nVALORES DEL ARRAY:\n\n");
for (int i=0; i<numE; i++)
{
printf("E numero de la posicion %d del array es %d;\n", i, vArray[i]);
}
}

