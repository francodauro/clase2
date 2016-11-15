//Se define la directiva del compilador
#include <stdio.h>

//Se define programa principal
int main (void)
{

//Se define un puntero llamado p1 que apunta a un número entero
  int *p1;

//Se asigna el número entero 5 a x  
  int x=5;

//Se asigna específicamente el número entero 4 al puntero p1
  *p1=4;

//Se da la orden de imprimir la dirección a la que apunta el puntero p1 en hexadecimal
  printf ("La dirección almacenada en p1 es: %p\n", p1);

//Se da la orden de imprimir el número entero 4 asignado a la dirección del puntero p1
  printf ("Lo apuntado por p1: %d\n", *p1);

//Se crea la relación entre el puntero p1 y el número entero 5 asignado a x  
  p1=&x;

//Se da la orden de imprimir la nueva dirección a la que apunta el puntero p1 en hexadecimal
  printf ("La nueva dirección almacenada en p1 es: %p\n", p1);

//Se da la orden de imprimir la dirección en hexadecimal en la que está guardado el elemento asignado a x
  printf ("La dirección de x: %p\n", &x);

//Se da la orden de imprimir el elemento al que apunta el puntero p1 que es el número entero 5
  printf ("Lo apuntado por p1: %d\n", *p1);

// Se da la orden a la función del programa principal devolver el valor 0  
  return 0;
}
