/*----------------------------------------------------------------------------*/
/*Autor: Guillermo Nicolás Merino                                             */
/*E-mail: memo.m10@outlook.es                                                 */
/*Fecha de creacion: 16/05/2018                                               */
/*Fecha de modificacion: 17/04/2018                                           */
/*Descripcion: Programa que imprima las tablas de multiplicar del 1 al 5            */
/*----------------------------------------------------------------------------*/

/*Declaración de bibliotecas*/
#include <stdio.h>

/*Prototipo de la funcion*/
int num(int , int );

/*Declaración de la función principal*/
int main(void)
{
	int cont,n;
	printf("Programa que muestra la tabla del multplicar 1 a 5\n\n");
	for(cont=1; cont <=5; cont++)
	{
		for(n=1;n<=10;n++)
		{
		printf("%d\tX\t%d\t=\t%d\n", cont,n, num(n, cont));
		}
		printf("\n");
	}
	return 0;
}

/*Cuerpo de la funcion*/
int num(int n , int cont )
{
return n *cont;
}
