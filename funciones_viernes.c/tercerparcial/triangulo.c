#include<stdio.h>
void main()
{
char print='*';
int i,j;
int tab=10;

for (j=0;j<=tab;j++) {
  for (i=1; i<j; i++) {
    printf("%c",print);
  }
  printf("\n");
  }
}
