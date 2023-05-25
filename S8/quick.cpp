#include <iostream>
#include <conio.h>

void quick(int[], int, int);
void intercambio(int &, int &);

int main()
{
    int nums[20];

    srand(time(NULL));

    for (int i = 0; i < 20; i++)
    {
        nums[i] = rand() % 100 + 1;
    }

    printf("\nORDENAMIENTO RAPIDO\n");
    printf("\nMOSTRANDO LISTA\n\n");

    for (int i = 0; i < 20; i++)
    {
        std::cout << nums[i] << " ";
    }

    quick(nums, 0, 19);

    printf("\n\nMOSTRANDO LISTA ORDENADA\n\n");

    for (int i = 0; i < 20; i++)
    {
        std::cout << nums[i] << " ";
    }

    getch();
    return 0;
}

void quick(int lista[], int pri, int ult)
{
    int i, j, central, pivote;

    central = (pri + ult) / 2;
    pivote = lista[central];
    i = pri;
    j = ult;

    do
    {
        while (lista[i] < pivote) i++;
        while (lista[j] > pivote) j--;

        if (i <= j)
        {
            intercambio(lista[i], lista[j]);
            i++;
            j--;
        }

    } while (i <= j);
    
    if (pri < j)
    {
        quick(lista, pri, j);
    }

    if (i < ult)
    {
        quick(lista, i, ult);
    }
}

void intercambio(int &a, int &b)
{
    int aux;

    aux = a;
    a = b;
    b = aux;
}