#include <stdio.h>
#include <math.h>
/* Funci�n matem�tica
El programa obtiene el resultado de una funci�n.

OP Y T: Variables de tipo entero.
RES: Variable de tipo real. */

void main(void)

{
 int OP, T;
 float RES;
 printf ("Ingrese la opci�n del c�lculo y el valor entero: ");
 scanf("%d %d", &OP , &T);
 switch (OP)
{
    case 1: RES = T / 5 ;
    break;
    case 2: RES = pow (T,T);
    break;
    case 3:
    break;
    case 4: RES = 6 * T / 2;
    break;
    default: RES = 1 ;
    break;
}
printf ("\Resultado: %7.2f" , RES);
}
