#include <stdio.h>
#include <stdlib.h>


void main ()
{
    int Ancho=0, Alto=0, Perimetro=0, Area=0;
    void Calculo()
    {
        printf ("Ingrese el ancho del rectangulo: ");
        scanf ("%d", &Ancho);
        printf ("Ingrese el alto del rectangulo: ");
        scanf ("%d", &Alto);
        system ("cls");
        Perimetro=2*Alto+2*Ancho;
        Area=Alto*Ancho;

    printf ("El perimetro es de: %d\ny el area es de: %d", Perimetro, Area);
    }
    Calculo();
    return 0;
}
