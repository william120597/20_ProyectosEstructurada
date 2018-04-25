#include<stdio.h>
#include<stdlib.h>

/*Definición de constantes*/
#define ROW 3 /*Número de filas de la matriz*/
#define COL 3 /*Número de columnas de la matriz*/
#define MAX 3
int main(void)
{
  int array[ROW][COL];
  int i;
  int j;

  /*Inicializar el array con valores enteros aleatorios 1-100*/
  for (int i = 0; i < ROW; i++)/*Ciclo que controla las filas del array*/
    {
    /*Asignacion de datos al array*/
    for(int j = 0; j < COL; j++) /*Ciclo que controla las columnas del array*/
    {
      /*Asignacion de datos al array*/
      /*utilizar la funcion scanf para solicitar datos al usuario*/

      /*Utilizar la funcion rand para obtener datos de forma aleatoria*/
      /*La funcion se encuentra definida dentro de la biblioteca stdlib.h*/
      array[i][j] = rand() % (MAX+1);

      /*tarea: el dia viernes 27 de abril*/
      /* Generar valores aleatorios de tipo flotante entre 0-1000*/


    }
 }
    /*colorear texto \x1b*/
  printf("\x1b[32m Datos aleatorios de la matriz:array[%d][%d]\n", ROW, COL);
  printf("\x1b[42m otro mensaje\n");
  printf("\x1b[0m otro mensaje \n");

  printf("{\n");
  for (int i=0; i < ROW; i++)/*Ciclo que controla las filas del array*/
    {
      printf("{\n");
    }
    /*Asignacion de datos al array*/
    for(int j=0; j < COL; j++) /*Ciclo que controla las columnas del array*/
    {
      printf("%d", array [i][j]);
    }

  return 0;
}
