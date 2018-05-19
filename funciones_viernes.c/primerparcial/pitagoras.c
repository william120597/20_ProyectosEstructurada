/*----------------------------------------------------------------------------*/
/*Autor: Guillermo Nicolás Merino                                             */
/*E-mail: memo.m10@outlook.es                                                 */
/*Fecha de creacion: 16/05/2018                                               */
/*Fecha de modificacion: 17/05/2018                                           */
/*Descripcion:
Pitagoras*/
/*----------------------------------------------------------------------------*/


/*Declaración de bibliotecas*/
#include <stdio.h>
#include <math.h>

/*Prototipo de la funcion*/
void dist();

/*Declaracion de la funcion principal*/
int main(void)
{
dist();
return 0;
}

/*Cuerpo de la funcion*/
void dist()

{
  float x1,x2,y1,y2,dist;
printf("Programa de Pitagoras\n\n");
fflush(stdout);
printf("ingrese el valor de x1  ");
fflush(stdout);
scanf("%f",&x1);
printf("ingrese el valor de y1  ");
fflush(stdout);
scanf("%f",&y1);
printf("ingrese el valor de x2:  ");
fflush(stdout);
scanf("%f",&x2);
printf("ingrese el valor de y2:  ");
fflush(stdout);
scanf("%f",&y2);

dist=sqrt((x1-y1)*(x1-y1)+(x2-y2)*(x2-y2));
printf("La distancia entre los dos puntos es: %.2f\n",dist);

}
