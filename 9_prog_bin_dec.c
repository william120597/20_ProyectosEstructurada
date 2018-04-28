/*Autor: Nicolás Merino Guillermo                                              */
/*E-mail: memo.m10@outlook.es                                                  */
/*Fecha de creación: 25/04/2018                                                */
/*Fecha de actualización: 26/04/2018                                           */
/*Descripción: Elaborar un programa que convierta un número de decimal a binario*/

#include<stdio.h>
#include<stdlib.h>

int main(void)
{
int num,dig,posicion=0,resultado=0;
int vector[]={1,2,4,8,16,32,64,128,256};

printf("Ingrese un número binario: " );
scanf("%i",&num);

while (num>0) {
  dig=num%10;
  if(dig==1){

    resultado=resultado+vector[posicion];
  }
  posicion++;
  num=num/10;
}
printf("El número binario convertido a decimal es %i: \n",resultado );



     return 0;
}
