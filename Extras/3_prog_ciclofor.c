/*Autor: Nicolás Merino Guillermo                                              */
/*E-mail: memo.m10@outlook.es                                                  */
/*Fecha de creación: 11/04/2018                                                */
/*Fecha de actualización: 12/04/2018                                           */
/*Descripción: Elabore un programa que imprima 10 veces "hola mundo", mediante  un ciclo for*/

#include <stdio.h>

#define CICLOFOR(x, y) for(x=0; x < y; x++)

int main(void)

{
  int x;
  int y = 10;

  CICLOFOR(x, y)
  {
  printf("\n Hola mundo...\n" );
  }


  return 0;
}
