/*Autor: Nicolás Merino Guillermo                                              */
/*E-mail: memo.m10@outlook.es                                                  */
/*Fecha de creación: 11/04/2018                                                */
/*Fecha de actualización: 12/04/2018                                           */
/*Descripción: Elabore un programa que imprima 10 veces "hola mundo", mediante  un ciclo do while */

#include <stdio.h> /*es el archivo de cabecera que contiene las definiciones de las macros*/
int main(void)
{
int contador = 1;                         /*Se declara el contador, el cual contara las veces que se imprima "hola mundo"*/
do {
  printf("Hola mundo\n",contador);          /* imprime "hola mundo" hasta que la condición se cumpla*/
  contador ++;                              /*Aumento*/
} while(contador <=10);                     /*El ciclo se terminará cuando  la condición se cumpla, en este caso hasta que se imprima "hola mundo" diez veces*/

return 0;     /*Termina la ejecución con exito*/

}
