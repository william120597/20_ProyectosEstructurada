#include <stdio.h>


void dibujarX(int);
/*----------------------------------------------------------------------------*/
/*Autor: Guillermo Nicolás Merino                                             */
/*E-mail: memo.m10@outlook.es                                                 */
/*Fecha de creacion: 16/05/2018                                               */
/*Fecha de modificacion: 17/04/2018                                           */
/*Descripcion: Programa que imprima una "x" usando "*"                        */
/*----------------------------------------------------------------------------*/
int main(void)
{
  int x;

  printf("\nIntroduce el valor de x: ");
  fflush(stdout);
  scanf("%d", &x);

  dibujarX(x);

  return 0;
}


void dibujarX(int x)
{
  for(int i = 0; i < x; i++)
  {
    for(int j = 0; j < x; j++)
    {
      if((i == j) || (j == ((x-1) - i)))
      {
        printf("*");
      }else{
        printf(" ");
      }
    }
    printf("\n");
  }
}
