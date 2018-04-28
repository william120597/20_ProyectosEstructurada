/*Autor: Nicolás Merino Guillermo                                              */
/*E-mail: memo.m10@outlook.es                                                  */
/*Fecha de creación: 24/04/2018                                                */
/*Fecha de actualización: 25/04/2018                                           */
/*Descripción: Elaborar un programa que convierta un número de decimal a binario*/

#include<stdio.h>
void binario(int n);


int main(void)
{
int num;

do {

	printf("Ingrese un número decimal: ");
	scanf("%i", &num);
		printf("El número convertido en binario es: ");
} while(num < 0);


binario(num);


return 0;
}

void binario(int n){
	if(n>1) binario(n/2);

	printf("%i",n%2);



}
