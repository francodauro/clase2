//Se definen las directivas del compilador
#include <stdio.h>

//Se define la variable global N
const N=10;

//Se escribe el programa principal
int main(void)
{

//Se define dos arreglos de números enteros
//El primero es un vector de N elementos
//El segundo es una matriz cuadrado de NxN elementos
   int v[N],m[N][N];

//Se definen dos variables enteras locales al main llamadas i y j
   int i,j;

//Se ordena generar un bucle for que utiliza como contador la variable i
//El contador empieza en 0 y termina en N-1 y su paso es igual a 1
   for (i = 0; i <=N-1 ; i++){

//Se ordena que el elemento i-esimo del vector v toma el valor de i
      v[i]=i;

//Se ordena imprimir el valor i-esimo del vector v
      printf ("%d ",v[i]);
    }

//Se ordena imprimir dos espacios hacia abajo
   printf("\n\n");

//Se ordena generar un bucle for anidado dentro de otro bucle for
//El objetivo es llenar una matriz cuadrada de NxN
//La matriz es llenada de izquierda a derecha y de arriba hacia abajo
//El contador de las filas es i el cual varía con paso igual a 1 de 0 a N-1
//El contador de las columnas es j el cual varía con paso igual a 1 de 0 a N-1
//Cada posición de la matriz i,j es llenada con la operación i+j
   for (i = 0; i <=N-1 ; i++){
     for (j = 0; j <=N-1 ; j++){
        m[i][j]=i+j;
        printf (" %d  ",m[i][j]);
      }
      printf("\n");
    }   
    
//La función programa principal devuelve el valor 0     
   return 0;
}
