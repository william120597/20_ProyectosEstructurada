/*----------------------------------------------------------------*/
/* Autor: Guillermo Nicolás Merino                                */
/* E-mail: memo.m10@outlook.es                                    */
/* Fecha creacion: 23/05/2018                                     */
/* Fecha actualizacion:                                           */
/* Descripcion: suma  con matrices                                */
/*----------------------------------------------------------------*/
#include <stdio.h>
#include <stdbool.h> //valores boleanos...

#define ROW 10
#define COL 10

bool validar_Multiplicacion_Matriz(int filaA, int colA, int filaB, int colB);
void leerDatosMatriz(int matriz[ROW][COL], int fila, int col);
void imprimirMatriz(int matriz[ROW][COL], int fila, int col);

void Multiplicacion_Matriz(int matrizA[ROW][COL], int matrizB[ROW][COL],
   int matrizResultado[ROW][COL],int fila, int col );

int main(void)
{
int filaA, colA;
int filaB, colB;

int matrizA[ROW][COL];
int matrizB[ROW][COL];
int matrizResultado[ROW][COL];

printf("\nIntroduce la fila de la matriz A: ");
  fflush(stdout);
scanf("%d",&filaA);

printf("\nIntroduce la columna de la matriz A: ");
fflush(stdout);
scanf("%d",&colA);

printf("\nIntroduce la fila de la matriz B: ");
fflush(stdout);
scanf("%d",&filaB);

printf("\nIntroduce la columna de la matriz B: ");
fflush(stdout);
scanf("%d",&colB);


if(validar_Multiplicacion_Matriz(filaA, colA, filaB, colB) == true)
{
  leerDatosMatriz(matrizA, filaA, colA);
  leerDatosMatriz(matrizB, filaB, colB);

  imprimirMatriz(matrizA, filaA, colA);
  imprimirMatriz(matrizB, filaB, colB);

  Multiplicacion_Matriz(matrizA, matrizB, matrizResultado, filaA,colA);

  printf("\nEl resultado de la suma es: \n");
  imprimirMatriz(matrizResultado, filaA, colB);

//realizar la operacion...
}else {
    printf("No se puede realizar la suma de matrices..\n");
  }

return 0;
}

void Multiplicacion_Matriz(int matrizA[ROW][COL], int matrizB[ROW][COL],
  int matrizResultado[ROW][COL],int fila, int col )
{
  for(int i=0; i<fila;i++)
{
  for(int j=0;j<col;j++)
    {
matrizResultado[i][j]=matrizA[i][j] * matrizB[i][j];
    }
  }
}

void leerDatosMatriz(int matriz[ROW][COL], int fila, int col)

  {
printf("\n\n");
  for(int i=0; i<fila;i++)
  {
    for(int j=0;j<col;j++)
    {
    printf("Introduce el elemento [%d][%d]", i, j);
    scanf("%d", &matriz[i][j]);
    }
  }

}

void imprimirMatriz(int matriz[ROW][COL], int fila, int col)
{
  printf("\n\n");
    for(int i=0; i<fila;i++)
    {
      printf("|");
      for(int j=0;j<col;j++)
      {
      printf(" %d ", matriz[i][j]);
      }
      printf("|\n");
    }
  }


bool validar_Multiplicacion_Matriz(int filaA, int colA, int filaB, int colB)
{
  if ((filaA == filaB) && (colA == colB))
{
return true;
}
return false;
}
