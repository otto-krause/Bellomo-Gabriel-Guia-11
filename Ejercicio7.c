#include <stdio.h>
#include <stdlib.h>


void main ()
{
    int num1=0, num2=0;
    void Igualdad()
    {
        printf ("Ingrese el primer numero: ");
        scanf ("%d",&num1);
        printf ("Ingrese el segundo numero: ");
        scanf ("%d",&num2);
        system ("cls");
        if (num1==num2)
            {
            printf("Ambos numeros tienen el mismo valor");
            }
        else
            {
            if (num1>num2)
                {
                printf("El primer numero (%d) es mayor al segundo (%d)", num1, num2);
                }
            else
                {
                printf("El segundo numero (%d) es mayor al primero (%d)", num2, num1);
                }
            }
    }
    Igualdad();
    return 0;
}
