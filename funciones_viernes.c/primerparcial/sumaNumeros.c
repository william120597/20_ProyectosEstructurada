/*----------------------------------------------------------------------------*/
/*Autor: Guillermo Nicolás Merino                                             */
/*E-mail: memo.m10@outlook.es                                                 */
/*Fecha de creacion: 16/05/2018                                               */
/*Fecha de modificacion: 17/05/2018                                           */
/*Descripcion: suma de los cien primeros números                                                */
/*----------------------------------------------------------------------------*/


/*Declaración de bibliotecas*/
#include <stdio.h>

/*Prototipo de la funcion*/
void suma();

/*Declaración de la función principal*/
int main()
{
suma();
  return 0;
}


/*Cuerpo de la funcion*/
void suma()
{
  int suma=0,n;

  for(n=1;n<=100;n++)
  {
    suma=suma+n;

  }
    printf("la suma de los 100 primeros numeros es:%d\n",suma );
}
