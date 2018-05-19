/*----------------------------------------------------------------------------*/
/*Autor: Guillermo Nicolás Merino                                             */
/*E-mail: memo.m10@outlook.es                                                 */
/*Fecha de creacion: 16/05/2018                                               */
/*Fecha de modificacion: 17/04/2018                                           */
/*Descripcion: Programa que imprima             */
/*----------------------------------------------------------------------------*/

/* Declaracion de bibliotecas*/
#include <stdio.h>
#include <stdlib.h>

/*Prototipo de la funcion*/
int mult(int , int );

/*declaracion de la funcion principal*/
int main(void)
{
int num=1,x;
printf("Programa que muestra la tabla de multiplicar del 1\n\n");
	printf("La Tabla del 1 es:\n");
	for(x=1; x<=10; x++)
	{
  printf("%d * %d = %d\n",num, x, mult(num, x));
	}
  return 0;
  }

  /*Cuerpo de la funcion*/
int mult(int num , int x )
{
int mult=num*x;
return mult;
}
