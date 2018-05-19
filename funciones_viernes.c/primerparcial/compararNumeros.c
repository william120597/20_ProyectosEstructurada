/*----------------------------------------------------------------------------*/
/*Autor: Guillermo Nicolás Merino                                             */
/*E-mail: memo.m10@outlook.es                                                 */
/*Fecha de creacion: 16/05/2018                                               */
/*Fecha de modificacion: 17/05/2018                                           */
/*Descripcion: Programa que compara números ingresados por el usuario         */
/*----------------------------------------------------------------------------*/
#include <stdio.h>

//prototipo de la funcion
int numeros(int,int,int);


int main(void)
{
  int num1, num2, num3;
  printf("Programa que compara numeros\n\n");
  fflush(stdout);
  printf("Dame el numero1\n");
  fflush(stdout);
  scanf("%d",&num1);
  printf("Dame el numero 2\n");
  fflush(stdout);
  scanf("%d",&num2);
  printf("Dame el numero 3\n");
  fflush(stdout);
  scanf("%d",&num3);
  numeros(num1,num2,num3);
  return 0;
}

int numeros(int num1, int num2, int num3)
{
  if (num1>num2 && num1>num3)
  {
    printf("El mayor es %d\n",num1);
  }

    if (num2>num1 && num2>num3)
    {
    printf("El mayor es %d\n",num2);
    }

    if (num3>num1 && num3>num2)
    {
    printf("El mayor es %d\n",num3);
    }
  else if (num1<num2 && num1<num3)
  {
    printf("El menor es %d\n",num1);
  }
  else
    if (num2<num1 && num2<num3)
    {
      printf("El menor es %d\n",num2);
    } else
    if (num3<num1 && num3<num2)
    {
      printf("El menor es %d\n",num3);
  }

else if (num1== num2 && num1==num3)
{
printf("Los numeros son iguales\n");
}
}
