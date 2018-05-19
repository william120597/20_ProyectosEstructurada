/*----------------------------------------------------------------------------*/
/*Autor: Guillermo Nicolás Merino                                             */
/*E-mail: memo.m10@outlook.es                                                 */
/*Fecha de creacion: 16/05/2018                                               */
/*Fecha de modificacion: 17/05/2018                                           */
/*Descripcion: Programa que muestre la edad de una persona y en base a ello determine si esta puede votar o no */
/*----------------------------------------------------------------------------*/


/* Declaracion de bibliotecas*/
#include <stdio.h>

//Prototipo de la función
int voto(int);

/*declaracion de la función principal*/

int main(void)
{


  int edad;

printf("Introduzca su edad: ");
fflush(stdout);
scanf("%i",&edad);
voto (edad);
return 0;
}


int voto(int edad)
{
  if (edad>=18)
{
  printf("Felicidades tu ya puedes votar en las proximas elecciones");
}
else
if(edad<18)
{
  printf("Lo sentimos aun eres menor de edad por lo tanto no tienes derecho a votar ");

}
}
