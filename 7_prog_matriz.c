/*Autor: Nicolás Merino Guillermo                                              */
/*E-mail: memo.m10@outlook.es                                                  */
/*Fecha de creación: 21/04/2018                                                */
/*Fecha de actualización: 23/04/2018                                           */
/*Elaborar un programa que imprima una matriz          */

#include <stdio.h>

int main(void)

{
int matcuad[4][4] = { {1,2,3,4} , {5,6,7,8} , {1,2,3,4} , {5,6,7,8} };
int matrec[3][6] = { {1,2,3,4,5,6} , {1,2,3,4,5,6} , {1,2,3,4,5,6} };
int col[6][1] =  {1,2,3,4,5,6};

int filas,columnas;


for(filas=0;filas<4;filas++){
    printf("\n" );
for (columnas=0;columnas<4;columnas++){
printf("%i ",matcuad[filas][columnas]);
}
}
printf("\n");

for(filas=0;filas<3;filas++){
    printf("\n" );
for (columnas=0;columnas<6;columnas++){
printf("%i ",matrec[filas][columnas]);
}
}
printf("\n");

for(filas=0;filas<6;filas++){
  printf("\n" );
for (columnas=0;columnas<1;columnas++){
printf("%i ",col[filas][columnas]);
}
}
printf("\n");

return 0;
}
