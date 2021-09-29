#include <stdio.h>
#include <stdlib.h>


void main()
{
    int Resistencia=0, I=0, ResT=0;
    void Resis()
    {
        printf("Ingrese las cinco resistencias en serie:\n");
        for(I=0;I<5;I++)
        {
            scanf("%d", &Resistencia);
            ResT=ResT+Resistencia;
        }
        printf("La resistencia total es de: %d", ResT);
    }
    Resis();
    return 0;
}
