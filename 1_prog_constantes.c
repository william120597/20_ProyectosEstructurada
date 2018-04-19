/*Autor: Nicolás Merino Guillermo                                              */
/*E-mail: memo.m10@outlook.es                                                  */
/*Fecha de creación: 11/04/2018                                                */
/*Fecha de actualización: 12/04/2018                                           */
/*Descripción: Elaborar un programa que cuente el número de veces que se repite un número en un arreglo*/

#include <stdio.h>


/* Declaracion de constantes con #define*/
/* No se reservan espacios en memoria */

#define PI 3.1416
#define G 9.81
#define TAMANIO 10
#define MIN 0
#define MAX 100

/*Implementación de macro*/
#define SUMA(x, y) x+y
#define RESTA(x, y) x-y
#define MULT(x, y) x*y
#define DIV(x ,y) x/y
#define POTCUADRADO(x) x*x
#define POTCUBO(x) x*x*x


/*Definir ciclos con macro*/

#define CICLOFOR(x, y) for(x=0; x < y; x++)
#define CICLOWHILE(z, j)  while (z < j)








const float pi=3.1416;
const float g=9.81;
const int tamanio=10;
const int  min=0;
const int max=100;





int main(void)
{

/* imprimir constantes #define*/

printf("CONSTANTES #DEFINE \n\n");

printf("El valor de PI es: \n %f \n\n", PI);
printf("El valor de la gravedad es: \n %f \n\n", G);
printf("El valor del tamaño es: \n %f \n\n", TAMANIO);
printf("El valor minimo es: \n %f \n\n", MIN);
printf("El valor maximo es: \n %f \n\n", MAX);

/*Imprimir macros*/

printf("MACROS \n\n");

printf("Operación SUMA:\n %d \n\n", SUMA(3,4));
printf("Operación RESTA:\n %d \n\n",RESTA(10,5));
printf("Operación MULT:\n %d \n\n", MULT(5,3));
printf("Operación DIV:\n %d \n\n", DIV(20,5));
printf("Operación POTCUADRADO:\n %d \n\n", POTCUADRADO(3));
printf("Operación POTCUBO:\n %d \n\n", POTCUBO(4));




/*imprimir constantes const */

printf("CONST \n\n");

printf("El valor de pi:\n %f \n", PI);
printf("El valor de la gravedad es: \n %f \n\n", G);
printf("El valor del tamaño es: \n %f \n\n", TAMANIO);
printf("El valor minimo es: \n %f \n\n", MIN);
printf("El valor maximo es: \n %f \n\n", MAX);



/*Utilizando las macros de ciclo*/

int x;
int y = 10;

CICLOFOR(x, y)
{
printf("Hola mundo...\n" );
}

printf("\n\n");

/*TAREA:Para lunes 16 ciclo while y do while*/
int z=0, j = 10;

CICLOWHILE(z, j)
{
  printf("Hola mundo\n");
  z+=1;
}







return 0;
}
