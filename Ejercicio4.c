#include <stdio.h>
#include <stdlib.h>


void main ()
{
    int Fuerza=0, Area=0, Presion=0;
    void Pres()
    {
        printf("Ingrese la fuerza ejercida en una superficie: ");
        scanf("%d",&Fuerza);
        printf("Ahora ingrese la superficie: ");
        scanf("%d",&Area);
        system("cls");
        Presion=Fuerza/Area;
        printf("La presion que se ejerce en la superficie es de: %d (pascal/es)", Presion);
    }
    Pres();
    return 0;
}
