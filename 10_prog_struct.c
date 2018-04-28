#include<stdio.h>
#define TAM 15

/*Colores del texto*/
#define RESET "\x1b[0m"
#define NEGRO "\x1b[30m"
#define ROJO "\x1b[31m"
#define VERDE "\x1b[32m"
#define AMARILLO"\x1b[33m"
#define AZUL"\x1b[34m"
#define MORADO "\x1b[35m"
#define CYAN "\x1b[36m"

#define NEGRITA "\x1b[1m"

/*Definición tamaños constantes de arreglos*/
#define TAM 20 /*Declaración de tipos de datos*/
#define TAM 5 /**/
#define d 5

/*Definicion de la estructura cenicero*/
/*struct Alumno*/

/*{
  char matricula[10];
  char curp[18];
  char nivelEstudio[30];
  char nombre[50];
  int edad;
  char sexo[1];
  char nacimiento[10];
  float peso;
  float estatura;
  char tiposangre;
  char telefono[12];
  char direccion[50];
  char alergia[20];
  char deporte[15];

}
*/
struct Alumno
{
  char matricula[10];
  char nombre[50];
  char sexo[1];
  int edad;
  float peso;
  float estatura;
};

/*Cuerpo de la funcion main*/
int main(void)/* No se le esta enviando ningun parametro a la funcion main*/

{
/*Declaracion de la estructura del Alumno*/
struct Alumno /*Declaracion de  la variable Alumno*/

/*Asignacion de datos: a los miembros de la estructura Alumno*/
/*Tipo de operador punto  (.)*/
/*edson.matricula= "2017060236";*/


/*De preferncia utilizar la funcion strcpy() o strncpy() de la funcion*/
/*strcpy (cadena en la que se copiara la cadena a  asignar)*/  
}



  return 0;
}
