#include <iostream>
#include <conio.h>

int main()
{
    int num, *dir_num;

    num = 5;
    dir_num = &num;

    std::cout << "\nValor de la variable: " << *dir_num;
    std::cout << "\nDireccion de la variable: " << dir_num << std::endl;

    // Número par o impar

    int num_2, *dir_num_2;
    dir_num_2 = &num_2;

    std::cout << "\nIngrese un numero: ";
    std::cin >> num_2;

    if (*dir_num_2 % 2 == 0)
    {
        std::cout << "\nEl numero es par\n";
    }
    else
    {
        std::cout << "\nEl numero es impar\n";
    }
    
    getch();
    return 0;
}