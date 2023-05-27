// FACTORIAL DE UN NÚMERO CON RECURSIVIDAD

#include <iostream>
#include <conio.h>

int factorial(int);

int main()
{
    int n;

    std::cout << "\nIngrese un numero: ";
    std::cin >> n;

    std::cout << std::endl << n << "! = " << factorial(n) << std::endl;

    getch();
    return 0;
}

int factorial(int num)
{
    if (num > 0)
    {
        return num * factorial(num - 1);
    }

    else
    {
        return 1;
    }
}