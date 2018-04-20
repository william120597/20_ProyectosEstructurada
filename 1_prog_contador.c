/*Autor: Nicolás Merino Guillermo                                              */
/*E-mail: memo.m10@outlook.es                                                  */
/*Fecha de creación: 11/04/2018                                                */
/*Fecha de actualización: 12/04/2018                                           */
/*Programa que permite encontrar las veces que se repite los números del 0 - 9 en un arreglo unidimensional dado.*/


#include <stdio.h>

int main(void)
{
int arreglo[10] = {2,9,6,4,6,4,9,2,2,6,};
int contador;
int i,j;

for(i=0;i<10;i++)
{
contador=0;
for(j=0;j<10;j++)
{
if (i==arreglo[j])
contador+=1;
}
if (contador == 0)
{
printf("El número %d no se encuentra en el arreglo \n",i);
}
else if(contador ==1)
{
printf("El número %d se repite %d vez\n\n",i,contador);
}
else
{
	printf("El número %d se repite %d veces\n", i, contador);
}
}
return 0;
}
