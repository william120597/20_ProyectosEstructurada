/*----------------------------------------------------------------------------*/
/*Autor: Guillermo Nicolás Merino                                             */
/*E-mail: memo.m10@outlook.es                                                 */
/*Fecha de creacion: 16/05/2018                                               */
/*Fecha de modificacion: 17/04/2018                                           */
/*Descripcion: Programa que imprima una "x" usando "*"                        */
/*----------------------------------------------------------------------------*/
#include <stdio.h>
#define TAMFIG 25

void dibujarFiguraContornoX(int tamanio);
int main(void)
{
  dibujarFiguraContornoX(TAMFIG);
  return 0;
}

void dibujarFiguraContornoX(int tamanio)
{
  for(int i = 0; i < tamanio; i ++)
  {
   for(int j = 0; j < tamanio; j++)
   {
   if((i == 0 || i == j) || j == 0 || j == (tamanio - 1))
   {
      printf("*");
    }else if(j == ((tamanio -1) - i) || i == (tamanio - 1))
    {
      printf("*");
        }else{
          printf(" ");
        }
      }
       printf("\n");
     }
   }
