/*----------------------------------------------------------------------------*/
/*Autor: Guillermo Nicolás Merino                                             */
/*E-mail: memo.m10@outlook.es                                                 */
/*Fecha de creacion: 16/05/2018                                               */
/*Fecha de modificacion: 17/05/2018                                           */
/*Descripcion: Programa que calcula el indice de masa corporal de una persona */
/*----------------------------------------------------------------------------*/

#include <stdio.h>
#include <math.h>

void IMC (void);

int main (void)
{
  IMC();

	return 0;
}



void IMC(void)
{
  float peso,IMC,altura;

  printf("Este programa calcula el IMC de una persona. \n\n");

  printf("Escriba su peso en kilos: ");
  fflush(stdout);


  scanf("%f",&peso);

  printf("Escriba su altura en metros: ");
  fflush(stdout);

  scanf("%f",&altura);

  IMC=peso/(pow(altura,2));

  printf("Tú IMC es: %.2f\n",IMC);
}
