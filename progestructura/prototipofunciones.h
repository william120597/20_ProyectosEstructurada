
/*----------------------------------------------------------------*/
/* Autor: Guillermo Nicolás Merino                                */
/* E-mail: memo.m10@outlook.es                                    */
/* Fecha creacion: 22/05/2018                                     */
/* Fecha actualizacion:                                           */
/* Descripcion: Definicion de constantes, estructura y prototipo  */
/*              de funciones.                                     */
/*----------------------------------------------------------------*/

#ifndef PROTOTIPOFUNCIONES_H_
#define PROTOTIPOFUNCIONES_H_

#define TAM_MARCA      12        /* Tamaño de la marca de la Moto                   */
#define TAM_PLACA      15
#define TAM_COLOR    10
#define TAM_MODE     20  /* Tamanio del color  de la Moto                    */
#define TOTAL_MOTO 10        /* Tamanio total de la moto                              */


/* Se define una estructura para modelar los datos de una Ropa.  */
/* Los miembros de la estructura son:                              */
/*                                    - Marca                   */
/*                                    - Color                     */
/*                                    - Placa                     */
/*                                    - Modelo                     */

typedef struct
{
	char Marca[TAM_MARCA];
	int Tamanio;
	char Color[TAM_COLOR];
	char Placas[TAM_PLACA];
	char Modelo[TAM_MODE];
}Moto;


/* Funciones que imprimen mensajes en pantalla */
void menuPrincipal(void);
void mostrarEncabezadoTabla(void);
void mostrarMoto(Moto);
void detenerPantalla(void);


/* Funciones que realizan las operaciones sobre la lista de las motos */
Moto crearNuevaMoto(void);
void mostrarListaMotos(Moto [], int);
void buscarMoto(Moto []);
void actualizarMoto(Moto []);
void eliminarMoto(Moto []);


/* Funcion que permite eliminar una Moto, es invocada por la funcion eliminarMoto() */
Moto * eliminarUnaMoto(Moto [], int);


/* Funciones que permiten ordenar los datos de las motos*/
int * ordenarAscendente(Moto [], int []);
int * ordenarDescendente(Moto [], int []);


#endif
