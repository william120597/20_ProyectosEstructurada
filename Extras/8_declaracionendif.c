/*Declarativa #if, #endif:*/

#include <stdio.h>

#define MAX 100

int main (void)
{
  #if MAX>99

  printf("compilado para arrays mayores de 99.\n");
  #endif

  return 0;
}
