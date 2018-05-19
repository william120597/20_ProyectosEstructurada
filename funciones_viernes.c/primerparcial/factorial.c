/*----------------------------------------------------------------------------*/
/*Autor: Guillermo Nicolás Merino                                             */
/*E-mail: memo.m10@outlook.es                                                 */
/*Fecha: 17/05/2018                                                           */
/*Fecha de actualizacion:   18/05/2018                                        */
/* Descripcion: Programa que suma los 100 primeros números                    */
/*----------------------------------------------------------------------------*/

/*Declaración de bibliotecas*/
#include <stdio.h>

/*Prototipo de la funcion*/
void sumar();

/*Declaración de la función principal*/
int main(void)
{
	sumar();
	  return 0;
}

/*Cuerpo de la funcion*/
void sumar()
{
	int number,n;
  int sumar=1;
  printf("Ingrese un número para obtener su factorial:  ");
	fflush(stdout);
  scanf("%d",&number);
  for(n=1;n<=number;n++)
  {
  sumar=sumar*n;
  }
  printf("El Factorial del número %d es: %d\n", number, sumar);
}
