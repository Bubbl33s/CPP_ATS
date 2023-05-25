#include <iostream>
#include <conio.h>

void shell(int[]);
void intercambio(int &, int &);

int main()
{
    int nums[20];

    srand(time(NULL));

    for (int i = 0; i < 20; i++)
    {
        nums[i] = rand() % 100 + 1;
    }

    printf("\nORDENAMIENTO POR SHELL\n");
    printf("\nMOSTRANDO LISTA\n\n");

    for (int i = 0; i < 20; i++)
    {
        std::cout << nums[i] << " ";
    }

    shell(nums);

    printf("\n\nMOSTRANDO LISTA ORDENADA\n\n");

    for (int i = 0; i < 20; i++)
    {
        std::cout << nums[i] << " ";
    }

    getch();
    return 0;
}

void shell(int lista[])
{
    int salto, j, k, n = 20; salto = 10;

    while (salto > 0)
    {
        for (int i = salto; i < n; i++)
        {
            j = i - salto;

            while (j >= 0)
            {
                k = j + salto;

                if (lista[j] <= lista[k])
                {
                    j = -1;
                }
                else
                {
                    intercambio(lista[j], lista[k]);
                    j -= salto;
                }
            }
        }
        salto /= 2;
    }
}

void intercambio(int &a, int &b)
{
    int aux;

    aux = a;
    a = b;
    b = aux;
}