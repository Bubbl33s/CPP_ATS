// Rellenar un array de 10 números e indicar los que sean apres, junto con sus posiciones de memoria

#include <iostream>
#include <conio.h>

int main()
{
    int nums[10], *pos_nums, menor = 999999;
    pos_nums = nums;

    // Rellenando el arreglo
    std::cout << "\nIngrese los datos del arreglo:\n\n";

    for (int i= 0 ; i < 10; i++)
    {
        std::cout << "Indice [" << i << "]: ";
        std::cin >> nums[i];
    }

    std::cout << std::endl;

    // Verificando los pares y mostrándolos
    for (int i = 0; i < 10; i++)
    {
        if (*pos_nums % 2 == 0)
        {
            std::cout << *pos_nums << " es par, direccion de memoria -> " << pos_nums << std::endl;
        }

        if (*pos_nums < menor)
        {
            menor = *pos_nums;
        }

        pos_nums++;
    }
    
    std::cout << "\nEl menor elemento es " << menor << std::endl;

    getch();
    return 0;
}