/*----------------------------------------------------------------------------*/
/*Autor: Guillermo Nicolás Merino                                             */
/*E-mail: memo.m10@outlook.es                                                 */
/*Fecha de creacion: 16/05/2018                                               */
/*Fecha de modificacion: 17/04/2018                                           */
/*Descripcion: Programa que imprima el factorial de un número "*"                        */
/*----------------------------------------------------------------------------*/



/*Recursividad: Una función recursiva es una funcion que se llama asi misma.
1.- Caso base.
2.- Caso recursivo.

a(x){
  return n;
}
else{
  a(x);
}
}
*/
//factorial


#include<stdio.h>
long factorial(int n);

int main(){
  int numero;

  printf("Ingrese un numero: ");
  fflush(stdout);
  scanf("%i",&numero);

  printf("\n El factorial del numero es: %li", factorial(numero));

  return 0;
}
/*

    PROCESO
    4! = 4*3!
    3! = 3*2!
    2! = 2*1!
    1! = 1

    4 * 3!
    3 * 2!
    2 * 1!
    1  .......CASO BASE
*/

long factorial(int n)
{if(n<=1)
  {return 1;
  }
  else{
    return (n*factorial(n-1));
  }
  }











//pagina de apoyo
//https://www.youtube.com/watch?v=HggE9MhDEvA
