/*----------------------------------------------------------------------------*/
/*Autor: Guillermo Nicolás Merino                                             */
/*E-mail: memo.m10@outlook.es                                                 */
/*Fecha de creacion: 16/05/2018                                               */
/*Fecha de modificacion: 17/05/2018                                           */
/*Descripcion: Programa que calcula el área de un rectángul                   */
/*----------------------------------------------------------------------------*/


//biblioteca
#include <stdio.h>

//prototipo de la funcion
float area(int , int );

//Declaracion de la funcion principal
int main(void)
{
float base, altura;
printf("<<Programa que calcula el área de un rectángulo>>\n\n");
printf("Ingrese la base: ");
 fflush(stdout); // imprime la instrucción "MENSAJE"
scanf("%f",&base);
printf("Ingrese la altura: ");
 fflush(stdout);
scanf("%f",&altura);
printf("El área del rectángulo es: %.2f\n",area(base,altura));
return 0;
}

//Cuerpo de la Función

float area (int base, int altura)
{
  return base*altura;
}
