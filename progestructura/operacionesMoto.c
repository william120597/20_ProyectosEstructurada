/*----------------------------------------------------------------*/
/* Autor: Guillermo Nicolás Merino                                */
/* E-mail: memo.m10@outlook.es                                    */
/* Fecha creacion: 22/05/2018                                     */
/* Fecha actualizacion:                                           */
/* Descripcion:  implementacion de funciones sobre la estructura  */
/*              alumno: crear, listar, ordenar, buscar,           */
/*              actualizar y eliminar.                            */
/*----------------------------------------------------------------*/


#include <stdio.h>
#include <string.h>

/* Se incluyen los archivos necesarios */
#include "colores.h"
#include "prototipofunciones.h"
#include "enums.h"

/* Variable global inicializada en principal.c */
extern int numMoto;



Moto crearNuevaMoto(void)
{
  Moto moto;

  printf(_TBLANCO _NEGRITA "Introduce la marca de la moto: "              _NNEGRITA _TVERDE);
  fgets(moto.Marca, TAM_MARCA, stdin);                                    /* Solicita la marca de la moto al usuario          */
  strcpy(moto.Marca, strtok(moto.Marca, "\n"));								    /* Elimina el salto de linea '\n' que genera fgets() */

  printf(_TBLANCO _NEGRITA "Introduce el color de la moto: " _NNEGRITA _TVERDE);
  fgets(moto.Color, TAM_COLOR, stdin);                         /* Solicita el color de la moto al usuario        */
  strcpy(moto.Color, strtok(moto.Color, "\n")); /*Elimina el salto de linea '\n' que genera fgets    */

  printf(_TBLANCO _NEGRITA "Introduce las placas de la moto: " _NNEGRITA _TVERDE);
  fgets(moto.Placas, TAM_PLACA, stdin);                         /* Solicita las placas de la moto al usuario        */
  strcpy(moto.Placas, strtok(moto.Placas, "\n")); /*Elimina el salto de linea '\n' que genera fgets    */

  printf(_TBLANCO _NEGRITA "Introduce el modelo de la moto: "  _NNEGRITA _TVERDE);
  fgets(moto.Modelo, TAM_MODE, stdin);
  strcpy(moto.Modelo, strtok(moto.Modelo, "\n")); /*Elimina el salto de linea '\n' que genera fgets    */

  while(getchar() != '\n'); /* Limpiar el buffer en caso de tener almacenado el salto de linea */
  printf("\n\n");
  return moto;
}




void mostrarListaMotos(Moto listaMotos[], int ordenar)
{
  int arrayTemp[numMoto];
  for(int i = 0; i < numMoto; i++)
  {
    arrayTemp[i] = i;
  }
  if(ordenar == 1)            /* 1: ordenacion ascendente  */
  {
    memcpy(arrayTemp, ordenarAscendente(listaMotos, arrayTemp), sizeof(arrayTemp));   /* memcpy: permite compiar un arreglo a otro */
  } else if(ordenar == 2){    /* 2: ordenacion descendente */
    memcpy(arrayTemp, ordenarDescendente(listaMotos, arrayTemp), sizeof(arrayTemp));  /* memcpy: permite compiar un arreglo a otro */
  }
  mostrarEncabezadoTabla();
  for(int i = 0; i < numMoto; i++)
  {
    mostrarMoto(listaMotos[arrayTemp[i]]);
    printf("\n");
  }
}



void buscarMoto(Moto listaMotos[])
{
  int opcionBuscar;
  char MarcaBuscar[TAM_MARCA];            /* Almacena el material a buscar dentro de la estructura                */
	char ColorBuscar[TAM_COLOR];         /* Almacena la marca a buscar dentro de la estructura             */

  printf(_TAMARILLO _NEGRITA "\n\n3. B U S C A R\n\n");
  printf(_TCYAN     _NEGRITA "Buscar moto  por:\n\n");
  printf(_TBLANCO   _NEGRITA "\t1. Marca\n");
  printf(_TBLANCO   _NEGRITA "\t2. Color \n\n");

  printf(_TCYAN     _NEGRITA "Introduce una opcion: ");
  scanf("%d", &opcionBuscar);

  switch(opcionBuscar)
  {
    case _xMarca:
        while(getchar() != '\n');     /* Limpiar el buffer en caso de tener almacenado el salgo de linea */

        printf(_TCYAN _NEGRITA "\n\nIngrese la marca de la moto: ");
        fgets(MarcaBuscar, TAM_MARCA, stdin);
        strcpy(MarcaBuscar, strtok(MarcaBuscar, "\n"));

        for(int i = 0; i < numMoto; i++)
            if(strcmp(MarcaBuscar, listaMotos[i].Marca) == 0)
            {
                mostrarEncabezadoTabla();
                mostrarMoto(listaMotos[i]);
            }
            break;

      case _xColor:
          while(getchar() != '\n');     /* Limpiar el buffer en caso de tener almacenado el salgo de linea */

          printf(_TCYAN _NEGRITA "\n\nIntroduce el color de la moto: ");
          fgets(ColorBuscar, TAM_COLOR, stdin);
          strcpy(ColorBuscar, strtok(ColorBuscar, "\n"));

          for(int i = 0; i < numMoto; i++)
          if(strcmp(ColorBuscar, listaMotos[i].Color) == 0)
          {
            mostrarEncabezadoTabla();
            mostrarMoto(listaMotos[i]);
          }
          break;
  }
}



void actualizarMoto(Moto listaMotos[])
{
  int opcionBuscar;
  char MarcaBuscar[TAM_MARCA];            /* Almacena el nombre a buscar dentro de la estructura                */
	char ColorBuscar[TAM_COLOR];         /* Almacena la matricula a buscar dentro de la estructura             */

  printf(_TCYAN     _NEGRITA "Buscar la moto a actualizar por:\n\n");
  printf(_TBLANCO   _NEGRITA "\t1. Marca\n");
  printf(_TBLANCO   _NEGRITA "\t2. Color \n\n");

  printf(_TCYAN     _NEGRITA "Introduce una opcion: ");
  scanf("%d", &opcionBuscar);

  switch(opcionBuscar)
  {
      case _xMarca:
          while(getchar() != '\n');     /* Limpiar el buffer en caso de tener almacenado el salgo de linea */

          printf(_TCYAN _NEGRITA "\n\nIntroduce la marca de la moto: ");
          fgets(MarcaBuscar, TAM_MARCA, stdin);
          strcpy(MarcaBuscar, strtok(MarcaBuscar, "\n"));

          for(int i = 0; i < numMoto; i++)
          {
              if(strcmp(MarcaBuscar, listaMotos[i].Marca) == 0)
              {
                  mostrarEncabezadoTabla();
                  mostrarMoto(listaMotos[i]);

                  printf("\n\n");

                  listaMotos[i] = crearNuevaMoto();

                  mostrarEncabezadoTabla();
                  mostrarMoto(listaMotos[i]);

                  break;
              }
          }
          break;

      case _xColor:
          while(getchar() != '\n');     /* Limpiar el buffer en caso de tener almacenado el salgo de linea */

          printf(_TCYAN _NEGRITA "\n\nIntroduce el Color de la moto: ");
          fgets(ColorBuscar, 50, stdin);
          strcpy(ColorBuscar, strtok(ColorBuscar, "\n"));

          for(int i = 0; i < numMoto; i++)
          {
              if(strcmp(ColorBuscar, listaMotos[i].Marca) == 0)
              {
                  mostrarEncabezadoTabla();
                  mostrarMoto(listaMotos[i]);

                  printf("\n\n");

                  listaMotos[i] = crearNuevaMoto();

                  mostrarEncabezadoTabla();
                  mostrarMoto(listaMotos[i]);

                  break;
              }
          }

          break;
  }
}



void eliminarMoto(Moto listaMotos[])
{
  int opcionBuscar;
  char MarcaBuscar[TAM_MARCA];            /* Almacena el nombre a buscar dentro de la estructura                */
	char ColorBuscar[TAM_COLOR];         /* Almacena la matricula a buscar dentro de la estructura             */

  printf(_TCYAN     _NEGRITA "Eliminar moto por:\n\n");
  printf(_TBLANCO   _NEGRITA "1. Marca\n");
  printf(_TBLANCO   _NEGRITA "2. Color \n\n");

  printf(_TCYAN     _NEGRITA "Introduce una opcion: ");
  scanf("%d", &opcionBuscar);

  switch(opcionBuscar)
  {
      case _xMarca:
          while(getchar() != '\n');     /* Limpiar el buffer en caso de tener almacenado el salgo de linea */

          printf(_TCYAN _NEGRITA "\n\nIntroduce la marca: ");
          fgets(MarcaBuscar, TAM_MARCA, stdin);
          strcpy(MarcaBuscar, strtok(MarcaBuscar, "\n"));

          for(int i = 0; i < numMoto; i++)
          {
              if(strcmp(MarcaBuscar, listaMotos[i].Marca) == 0)
              {
                  mostrarEncabezadoTabla();
                  mostrarMoto(listaMotos[i]);

                  printf("\n\n");

                  printf(_TBLANCO _NEGRITA "\n\nPresione una (s) si esta seguro de eliminar el registo:  "_NNEGRITA _TVERDE);

                  char opcionEliminar;
                  while((opcionEliminar = getchar()) == 's')
                  {
                    printf("\nSizeof: %lu\n", sizeof(* listaMotos));
                    listaMotos = eliminarUnaMoto(listaMotos, i);
                  }

                  printf("\n\n");
                  break;
              }
          }
          break;

      case _xColor:
          while(getchar() != '\n');     /* Limpiar el buffer en caso de tener almacenado el salgo de linea */
          //strcpy(moto.Placas, strtok(moto.Placas, "\n")
          printf(_TCYAN _NEGRITA "\n\nIntroduce el color: "); /*Elimina el salto de linea '\n' que genera fgets    */
          fgets(ColorBuscar, TAM_COLOR, stdin);
          strcpy(ColorBuscar, strtok(ColorBuscar, "\n"));

          for(int i = 0; i < numMoto; i++)
          {
              if(strcmp(ColorBuscar, listaMotos[i].Color) == 0)
              {
                  mostrarEncabezadoTabla();
                  mostrarMoto(listaMotos[i]);

                  printf("\n\n");

                  printf(_TBLANCO _NEGRITA "\n\nPresione una (s) si esta seguro de eliminar el registo:  " _NNEGRITA _TVERDE);

                  char opcionEliminar;
                  while((opcionEliminar = getchar()) == 's')
                  {
                      listaMotos = eliminarUnaMoto(listaMotos, i);
                  }

                  printf("\n\n");
                  break;
              }
          }
  }
}  
//Moto *
Moto * eliminarUnaMoto(Moto listaMotos[], int posicion)
{
  if(posicion < (numMoto - 1))
  {
    for(int j = posicion; j < numMoto-1; j++)
    {
      strcpy(listaMotos[j].Marca,          listaMotos[j+1].Marca);
      strcpy(listaMotos[j].Color,    listaMotos[j+1].Color);
      strcpy(listaMotos[j].Placas, listaMotos[j+1].Placas);
      strcpy(listaMotos[j].Modelo, listaMotos[j+1].Modelo);

    }
  }

  strcpy(listaMotos[numMoto-1].Marca,          "");
  strcpy(listaMotos[numMoto-1].Color,      "");
  strcpy(listaMotos[numMoto-1].Placas,       "");
  strcpy(listaMotos[numMoto-1].Modelo, "");

  numMoto--;

  printf("\n\nEl registro se ha eliminado exitosamente.\n\n");
  return listaMotos;
}
