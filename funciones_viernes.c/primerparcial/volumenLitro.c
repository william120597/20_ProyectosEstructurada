/*----------------------------------------------------------------------------*/
/*Autor: Guillermo Nicolás Merino                                             */
/*E-mail: memo.m10@outlook.es                                                 */
/*Fecha de creacion: 16/05/2018                                               */
/*Fecha de modificacion: 17/05/2018                                           */
/*Descripcion: Programa que obtiene el volúmen en litros                      */
/*----------------------------------------------------------------------------*/

/*Declaración de bibliotecas*/
#include <stdio.h>

/*Prototipo de la funcion*/
float volumen(float , float, float );

/*Declaración de la función principal*/
int main(void)
{
  float largo, ancho,altura;
  printf("Programa que calcule el volúmen en litros...\n\n");
  fflush(stdout);
  printf("Ingrese el largo: ");
  fflush(stdout);
  scanf("%f",&largo);
  printf("Ingrese el ancho ");
  fflush(stdout);
  scanf("%f",&ancho);
  printf("Ingrese la altura: ");
  fflush(stdout);
  scanf("%f",&altura);
  printf("El volúmen es:  %.2f litros cubicos\n", volumen(largo, altura, ancho));
  return 0;
  }

  /*Cuerpo de la funcion*/
  float volumen(float largo , float ancho, float altura)
{
  float volumen=largo*ancho*altura;
return volumen;
}
