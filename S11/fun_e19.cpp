// SUMA DE N ENTEROS CON RECURSIVIDAD

#include <iostream>
#include <conio.h>

int suma(int);

int main()
{
    int n;

    std::cout << "\nIngrese un numero: ";
    std::cin >> n;

    std::cout << std::endl << "Suma de " << n << " primeros enteros: " << suma(n) << std::endl;

    getch();
    return 0;
}

int suma(int num)
{
    if (num == 1)
    {
        return 1;
    }

    else
    {
        return num + suma(num - 1);
    }
}