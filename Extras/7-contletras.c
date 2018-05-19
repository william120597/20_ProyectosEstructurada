 /*Autor: Nicolás Merino Guillermo                                              */
/*E-mail: memo.m10@outlook.es                                                  */
/*Fecha de creación: 11/04/2018                                                */
/*Fecha de actualización: 12/04/2018                                           */
/*Programa que permite encontrar las veces que se repite una letra en una palabra .*/


#include <stdio.h>

int main(void)
{
int arreglo[5] = {m,e,m,o};
int contador;
int i,j;

for(i=0;i<5;i++)
{
contador=0;
for(j=0;j<5;j++)
{
if (i==arreglo[j])
contador+=1;
}
if (contador == 0)

{
printf("la letra %d se repite %d vez\n\n",i,contador);
}

return 0;
}
