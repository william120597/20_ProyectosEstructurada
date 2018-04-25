/*Autor: Nicolás Merino Guillermo                                              */
/*E-mail: memo.m10@outlook.es                                                  */
/*Fecha de creación: 21/04/2018                                                */
/*Fecha de actualización: 22/04/2018                                           */
/*Elaborar un programa que convierta letras de mayúsculas a minúsculas          */

#include <stdio.h>

const int tamanio = 10;  /*Definir una constante */
int main (void)
{

char c;
char array[tamanio];

int index = 0;
while((c = getchar()) != '\n')

{
if(c >= 65 && c <= 90)
  {
  c = c+32;
  array[index] = c;
  index++;
  }
}
printf("\n");
for(int i = 0; i < tamanio; i++ )

{
printf("%c", array[i]);
}

printf("\n");

  return 0;




}
