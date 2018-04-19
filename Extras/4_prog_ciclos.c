#include <stdio.h>



int main(void)

#define CICLOFOR(x, y) for(x=0; x < y; x++)
{
  int x;
  int y = 10;

  CICLOFOR(x, y)
  {
  printf("\n Hola mundo...\n" );
  }
  {
  int contador=1;
  while (contador <= 10)
    printf("Hola mundo\n",contador);
    contador ++;/* code */

}
  int contador = 1;
  do {
    printf("Hola mundo\n",contador);
    contador ++;
  } while(contador <=10);

return 0;

}
