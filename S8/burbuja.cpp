#include <iostream>
#include <conio.h>

void burbuja(int[]);

int main()
{
    int nums[20];

    srand(time(NULL));

    for (int i = 0; i < 20; i++)
    {
        nums[i] = rand() % 100 + 1;
    }

    printf("\nORDENAMIENTO DE BURBUJA\n");
    printf("\nMOSTRANDO LISTA\n\n");

    for (int i = 0; i < 20; i++)
    {
        std::cout << nums[i] << " ";
    }

    burbuja(nums);

    printf("\n\nMOSTRANDO LISTA ORDENADA\n\n");

    for (int i = 0; i < 20; i++)
    {
        std::cout << nums[i] << " ";
    }

    getch();
    return 0;
}

void burbuja(int lista[])
{
    int aux;

    for (int i = 0; i < 20; i++)
    {
        for (int j = 0; j < 20; j++)
        {
            if (lista[j] > lista[j + 1])
            {
                aux = lista[j];
                lista[j] = lista[j + 1];
                lista[j + 1] = aux;
            }
        }
    }
}