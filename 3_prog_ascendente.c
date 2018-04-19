/*Autor: Nicolás Merino Guillermo                                              */
/*E-mail: memo.m10@outlook.es                                                  */
/*Fecha de creación: 11/04/2018                                                */
/*Fecha de actualización: 12/04/2018                                           */
/*Elaborar un programa que ordene los numeros de manera ascendente             */

#include <stdio.h>
 int main()

  {

  int arreglo[] = {3,5,6,1,7,9,4,1,5};
  int aux,i,j;
  for (i = 0; i<9; i++)
   {
     for (j = i+1; j<9; j++)
     {
       if (arreglo[i] > arreglo[j])
       {
         aux = arreglo[j];
         arreglo [j] = arreglo[i];
         arreglo [i] = aux;
       }
     }
   }
   for (i=0 ; i < 9; i++)
   {
     printf("%d\n", arreglo[i]);
   }
  return 0;
}
