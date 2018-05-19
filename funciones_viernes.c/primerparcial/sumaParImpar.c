/*----------------------------------------------------------------------------*/
/*Autor: Guillermo Nicolás Merino                                             */
/*E-mail: memo.m10@outlook.es                                                 */
/*Fecha de creacion: 16/05/2018                                               */
/*Fecha de modificacion: 17/04/2018                                           */
/*Descripcion: Programa que muestre los números del 1 al 100 e imprima la suma de los pares y los impares             */
/*----------------------------------------------------------------------------*/

/* Declaracion de bibliotecas*/
#include <stdio.h>

/*Prototipo de la funcion*/
void resul();
/*declaracion de la funcion principal*/
int main(void)
{
resul();
return 0;
}
/*Cuerpo de la funcion*/
void resul()
{
  int x,sumaP,sumaI;
  printf("los numeros del 1 al 100 son: \n");
  for (x=1;x<=100;x++)
  {
    printf("%d\n",x);
    if (x%2==0)
    {
    sumaP=sumaP+x;
  }
    if (x%2==1)
    {
    sumaI=sumaI+x;
  }
  }
  printf("la suma de los numeros pares es:  %d\n ",sumaP);
  printf("la suma de los numeros impares es: %d\n ",sumaI);

}
