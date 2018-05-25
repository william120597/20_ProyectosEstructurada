/*----------------------------------------------------------------*/
/* Autor: Guillermo Nicolás Merino                                */
/* E-mail: memo.m10@outlook.es                                    */
/* Fecha creacion: 22/05/2018                                     */
/* Fecha actualizacion:                                           */
/* Descripcion: implementacion de funciones que muestran datos en */
/*              pantalla.                                         */
/*----------------------------------------------------------------*/


#include <stdio.h>
#include <stdlib.h>

#include "colores.h"
#include "prototipofunciones.h"

void menuPrincipal(void)
{
  system("clear");  /* Limpia toda la pantalla.           */
  puts("");         /* Haciendo salto de linea con puts(). */

  printf(_FVERDE _TCYAN  _NEGRITA _SUBRAYADO "\nS I S T E M A     D E    C O N T R O L    D E    MOTOCICLETAS" _ARESET);

  printf(_TMORADO _NEGRITA "\nM E N U    P R I N C I P A L\n");

  printf(_TAMARILLO _NEGRITA "\n\t1. Alta de motos");
  printf(_TAMARILLO _NEGRITA "\n\t2. Lista de motos");
  printf(_TAMARILLO _NEGRITA "\n\t3. Lista de motos Acendente");
  printf(_TAMARILLO _NEGRITA "\n\t4. Lista de motos Descendente");
  printf(_TAMARILLO _NEGRITA "\n\t5. Buscar moto");
  printf(_TAMARILLO _NEGRITA "\n\t6. Actualizar moto");
  printf(_TAMARILLO _NEGRITA "\n\t7. Eliminar moto");
  printf(_TAMARILLO _NEGRITA "\n\t8. Salir");
}


void mostrarEncabezadoTabla(void){
  printf(_TROJO     _NEGRITA);
  printf("%-12s|%-10s|%-10s|\tPLACA\t|", "MARCA", "COLOR", "MODELO");
  printf("\n---------------------------------------------------------------------------\n");
}

void mostrarMoto(Moto moto)
{

  printf(_TBLANCO _NEGRITA);
  printf("%-12s|%-10s|%-10s|\t%s\t", moto.Marca, moto.Color, moto.Modelo, moto.Placas);
}

void detenerPantalla(void)
{
  char c;                           /* Lee un caracter y valida el salto de linea para salir de la opcion. */
  printf(_TAMARILLO _NEGRITA "\n\nPresiones Enter para salir: ");
  while((c=getchar()) != '\n')  /* Solicita un enter al usuario para reiniciar el menu principal */
  {}
}
