/*----------------------------------------------------------------------------*/
/*Autor: Guillermo Nicolás Merino                                             */
/*E-mail: memo.m10@outlook.es                                                 */
/*Fecha de creacion: 16/05/2018                                               */
/*Fecha de modificacion: 17/04/2018                                           */
/*Descripcion: Programa que imprima un rectángulo con asteriscos              */
/*----------------------------------------------------------------------------*/
#include <stdio.h>
#include <stdlib.h>
int main(void)
 {
   int i, j, filas ,columnas;

   printf("Introduzca el numero de filas: ");
   fflush(stdout); //permite mostrar un mensaje en pantalla...
if (scanf("%d", &filas) != 1)
 return 0;

printf("Introduzca el numero de columnas: ");
 fflush(stdout);//permite mostrar un mensaje en pantalla...
if (scanf("%d",&columnas) != 1)
 return 0;

for (i = 1; i <= filas; i++)
{ for(j = 1; j <= columnas ; j++)

if (i == 1 || i == filas || j == 1 || j == columnas)

 printf("*");
else
 printf(" ");
 printf("\n");
}
return 0; }
