#include <stdio.h>
#include <stdlib.h>


void main()
{
    int Num1=0, Num2=0;
    void Numprint()
    {
        printf("Ingrese un numero al azar:\n");
        scanf("%d", &Num1);
        printf("Ingrese otro numero al azar:\n");
        scanf("%d", &Num2);
        system("cls");
        printf("%d\n", Num1);
        printf("\n%d", Num2);
    }
    Numprint();
    return 0;
}
