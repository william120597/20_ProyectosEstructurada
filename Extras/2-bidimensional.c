/*Autor: Nicolás Merino Guillermo                                              */
/*E-mail: memo.m10@outlook.es                                                  */
/*Fecha de creación: 11/04/2018                                                */
/*Fecha de actualización: 12/04/2018                                           */
/*Descripción: Elabore un programa que imprima en pantalla un arreglo bidimensional de dos filas y tres columnas*/

#include <stdio.h>

int main(void){
int matriz[2][4] = { {1,2,3,4} , {5,6,7,8} };
int filas,columnas;

for(filas=0;filas<2;filas++){
for (columnas=0;columnas<4;columnas++){
printf("%i ",matriz[filas][columnas]);
}
printf("\n");
}
return 0;
}
