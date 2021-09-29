#include <stdio.h>
#include <stdlib.h>


void main()
{
    int Num=0, Numfrac=0;
    void Div()
    {
        printf("Ingrese un numero: ");
        scanf("%d", &Num);
        system("cls");
        Numfrac=Num/8;
        printf("La octava parte de %d es: %d", Num, Numfrac);
    }
    Div();
    return 0;
}
