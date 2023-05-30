// DETERMINAR SI UN NÚMERO ES PRIMO USANDO PUNTEROS E IMPRIMIR SU DIRECCIÓN DE MEMORIA

#include <iostream>
#include <conio.h>

int main()
{
    int num, *dir_num, counter = 0;
    dir_num = &num;

    std::cout << "\nIngrese un numero: ";
    std::cin >> num;

    for (int i = 2; i < ((*dir_num / 2) + 1); i++)
    {
        if (*dir_num % i == 0)
        {
            counter++;
        }
    }

    if (counter == 0)
    {
        std::cout << *dir_num << " es primo\n";
    }
    else
    {
        std::cout << *dir_num << " no es primo\n";
    }

    std::cout << "La direccion de memoria de " << *dir_num << " es " << dir_num << std::endl;

    getch();
    return 0;
}