#include <stdio.h>

#define CICLOFOR(x, y) for(x=0; x < y; x++)

int main(void)

{
  int x;
  int y = 10;

  CICLOFOR(x, y)
  {
  printf("\n Hola mundo...\n" );
  }


  return 0;
}
