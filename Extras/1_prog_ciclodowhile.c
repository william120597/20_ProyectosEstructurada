/*Autor: Nicolás Merino Guillermo                                              */
/*E-mail: memo.m10@outlook.es                                                  */
/*Fecha de creación: 11/04/2018                                                */
/*Fecha de actualización: 12/04/2018                                           */
/*Descripción: Elabore un programa que imprima 10 veces "hola mundo", mediante  un ciclo do while */

#include <stdio.h>
int main(void)
{
int contador = 1;
do {
  printf("Hola mundo\n",contador);
  contador ++;
} while(contador <=10);

return 0;

}
