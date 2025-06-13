#include <stdio.h>

/* Incremento de precio.
El programa, al recibir como dato el precio de un producto importado incrementa
11% el mismo si éste es inferior a $1,500.
PRE Y NPR: variable de tipo real.
Modifique el código ya que subía el 11% si era más de 1500 */

void main (void)
{
float PRE, NPR;
printf("Ingrese el precio del producto: ");
scanf("%f", &PRE);
if (PRE < 1500)
{
    NPR=PRE * 1.11;
    printf("\nNuevo precio: %7.2f", NPR);
}
}
