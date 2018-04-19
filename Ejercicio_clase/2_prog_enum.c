#include <stdio.h>


/*Declaración de enum*/
/*tipo identificador{lista_de_identificadores};*/
/*Tarea para el dia lunes: imprimir val1,val2,val3 */
enum DIAS{L, M, MI, J, V, S, D};
enum MESES{EN=1, FE, MA, AB, MAY, JUN, JUL, AG, SE, OC, NO, DI};
enum FRUTAS{manzana, mango, durazno, pera, uva, pina};

enum PRECIOAUTO{NUEVO = 10, SEMINUEVO=-5, USADO, INSERVIBLE};

/*Enumeración anónina*/
enum {PROG, MATEDIS, MATII, TGS, ELECT}var1, var2, var3;

int main(void)
{
printf("%d\n", USADO);

for(enum MESES index = EN; index <= DI; index++)
{
  printf("%d ", index);

  switch (index)
  {
    case EN:
    printf("\nEnero\n");
    break;
    case OC:
    printf("\nOctubre\n");
    break;
  }
}
printf("\n");
return 0;
}
