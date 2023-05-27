// FIBONACCI CON RECURSIVIDAD

#include <iostream>
#include <conio.h>

int fibonacci(int);

int main()
{
    int n;

    std::cout << "\n\tSERIE DE FIBONACCI\n\n";
    std::cout << "Ingrese el numero de terminos: ";
    std::cin >> n;

    std::cout << std::endl;

    for (int i = 0; i <= n; i++)
    {
        if (i != n)
        {
            std::cout << fibonacci(i) << ", ";
        }

        else
        {
            std::cout << fibonacci(i) << std::endl;
        }
    }

    getch();
    return 0;
}

int fibonacci(int num)
{
    if (num < 2)
    {
        return 1;
    }

    else
    {
        return fibonacci(num - 2) + fibonacci(num - 1);
    }
}