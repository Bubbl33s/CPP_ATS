#include <iostream>
#include <conio.h>

void seleccion(int[]);

int main()
{
    int nums[20];

    srand(time(NULL));

    for (int i = 0; i < 20; i++)
    {
        nums[i] = rand() % 100 + 1;
    }

    printf("\nORDENAMIENTO POR SELECCION\n");
    printf("\nMOSTRANDO LISTA\n\n");

    for (int i = 0; i < 20; i++)
    {
        std::cout << nums[i] << " ";
    }

    seleccion(nums);

    printf("\n\nMOSTRANDO LISTA ORDENADA\n\n");

    for (int i = 0; i < 20; i++)
    {
        std::cout << nums[i] << " ";
    }

    getch();
    return 0;
}

void seleccion(int lista[])
{
    int aux, menor, menor_pos;

    for (int i = 0; i < 20; i++)
    {
        menor = lista[i];

        for (int j = i + 1; j < 20; j++)
        {
            if (lista[j] < menor)
            {
                menor = lista[j];
                menor_pos = j;
            }
        }

        if (menor != lista[i])
        {
            aux = lista[i];
            lista[i] = lista[menor_pos];
            lista[menor_pos] = aux;
        }
    }
}