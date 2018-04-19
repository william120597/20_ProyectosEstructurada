/* Autor: Nicolás Merino Guillermo                                         */
/* E-mail: memo.m10@outlook.es                             */
/* Fecha de creación: 14/04/2018                                          */
/* Fecha de actualización: 15/04/2018                                      */
/* DescripciÃ³n: diseñe un programa que encuentre el número mayor en un arreglo    */
/*              unidimencional de enteros.                                 */


/* DeclaraciÃ³n de bibliotecas de cabecera */
#include <stdio.h>


#define TAM 10 /* DeclaraciÃ³n de constante */


/* ImplementaciÃ³n del cuerpo del programa */
int main(void)
{
  int arreglo[TAM] = {2, 5, 11, 0, 20, 7, 3, 12, 6, 8}; /* Declaración e inicialización del arreglo */

  int mayor = arreglo[0]; /* Se asigna a la variable mayor el primer elemento del arreglo */

  /* Se evalúa cada una de las posiciones del arreglo para hallar el número mayor*/
  /* Se inicializa i con 1, para no evaluar la posición 0. */
  for(int i = 1; i < TAM; i++)
  {
    if(mayor < arreglo[i])
      mayor = arreglo[i];
  }

  printf("El número mayor es: %d\n", mayor);
  return 0;
}
