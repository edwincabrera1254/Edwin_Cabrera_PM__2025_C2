#include <stdio.h>
/* Superficie del tri�ngulo
El programa, al recibir comod atos la base y la altura de un
tri�ngulo calcula su superficie.

Bas, ALT Y SUP: variables tipo real. */

void main (void)
{
    float BAS, ALT, SUP;
    printf("Ingrese la base y la altura del triangulo: ");
    scanf ("%f %f", &BAS, &ALT );
    SUP = BAS * ALT / 2;
    printf ("\nLa superficie del tri�ngulo es: %5.2f" , SUP);
}
