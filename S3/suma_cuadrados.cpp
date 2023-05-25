#include <iostream>
#include <conio.h>
#include <math.h>

int main()
{
    int suma = 0;

    printf("\n\tSUMA DE CUADRADOS DE LOS PRIMEROS 10 ENTEROS\n\n");

    for(int i = 1; i <= 10; i++)
    {
        suma += pow(i, 2);
    }

    printf("Resutlado: %i", suma);

    getch();

    return 0;
}