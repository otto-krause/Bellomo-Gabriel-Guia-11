#include <stdio.h>
#include <stdlib.h>


void main ()
{
    int PFem, PMasc, PTotal, PercMasc, PercFem;
    printf("ingrese la cantidad de hombres que enviaron su curricular: ");
    scanf("%d",&PMasc);
    printf("ingrese la cantidad de mujeres que enviaron su curricular: ");
    scanf("%d",&PFem);
    void Percent()
    {
        PTotal=PMasc+PFem;
        PercMasc=(PMasc/PTotal)*100;
        PercFem=(PFem/PTotal)*100;
        printf("El porcentaje de hombres es de %%%d\ny el de mujeres es de: %%%d", PercMasc, PercFem);
    }
    Percent();
    return 0;
}
