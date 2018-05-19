/*----------------------------------------------------------------------------*/
/*Autor: Guillermo Nicolás Merino                                             */
/*E-mail: memo.m10@outlook.es                                                 */
/*Fecha de creacion: 16/05/2018                                               */
/*Fecha de modificacion: 17/05/2018                                           */
/*Descripcion: Programa que indica si un número es Positivo o Negativo y si es par o impar */
/*----------------------------------------------------------------------------*/

/* Declaracion de biblioteca*/
#include <stdio.h>

/*Prototipo de la funcion*/
int valor(int );

/*Declaracion de la funcion principal*/
int main(void)
{
    int n;
           printf("Ingrese un número:\n");
           fflush(stdout);
           scanf("%d",&n);
           valor(n);
           return 0;
           }



int valor(int n)
{

   if (n%2==0)
    {
      printf("El número es par\n");
   }
   else
   {
      printf("El número es impar\n");
   }

   if (n<0) {
      printf("El número es negativo\n");
   }

   else
   {
      printf("El número es positivo\n");
   }
 }
