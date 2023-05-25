#include <iostream>
#include <conio.h>

void insercion(int[]);

int main()
{
    int nums[20];

    srand(time(NULL));

    for (int i = 0; i < 20; i++)
    {
        nums[i] = rand() % 100 + 1;
    }

    printf("\nORDENAMIENTO POR INSERCION\n");
    printf("\nMOSTRANDO LISTA\n\n");

    for (int i = 0; i < 20; i++)
    {
        std::cout << nums[i] << " ";
    }

    insercion(nums);

    printf("\n\nMOSTRANDO LISTA ORDENADA\n\n");

    for (int i = 0; i < 20; i++)
    {
        std::cout << nums[i] << " ";
    }

    getch();
    return 0;
}

void insercion(int lista[])
{
    int aux, pos;

    for (int i = 1; i < 20; i++)
    {
        pos = i;
        aux = lista[i];

        while ((pos > 0) && (lista[pos - 1] > aux))
        {
            lista[pos] = lista[pos - 1];
            pos--;
        } 
        lista[pos] = aux;
    }
}