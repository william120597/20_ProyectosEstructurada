/*----------------------------------------------------------------*/
/* Autor: Guillermo Nicolás Merino                                */
/* E-mail: memo.m10@outlook.es                                    */
/* Fecha creacion: 22/05/2018                                     */
/* Fecha actualizacion:                                           */
/* Descripcion: implementacion de las funciones de ordenacion.    */
/*----------------------------------------------------------------*/

#include <string.h>
#include "prototipofunciones.h"

extern int numMoto;

int * ordenarAscendente(Moto listaMotos[], int arrayTemp[])
{
  for(int i = 0; i < numMoto; i++)
  {
    for(int j = i + 1; j < numMoto; j++)
    {
      if(strcmp(listaMotos[arrayTemp[i]].Marca, listaMotos[arrayTemp[j]].Marca) > 0)
      {
        int aux = arrayTemp[i];
        arrayTemp[i] = arrayTemp[j];
        arrayTemp[j] = aux;
      }
    }
  }
  return arrayTemp;
}



int * ordenarDescendente(Moto listaMotos[], int arrayTemp[])
{
  for(int i = 0; i < numMoto; i++)
  {
    for(int j = i + 1; j < numMoto; j++)
    {
      if(strcmp(listaMotos[arrayTemp[i]].Marca, listaMotos[arrayTemp[j]].Marca) < 0)
      {
        int aux = arrayTemp[i];
        arrayTemp[i] = arrayTemp[j];
        arrayTemp[j] = aux;
      }
    }
  }
  return arrayTemp;
}
