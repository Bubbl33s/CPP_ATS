#include <iostream>
#include <conio.h>

int funpot(int, int);

int main()
{
    int base, exp;

    std::cout << "Ingrese la base: ";
    std::cin >> base;
    std::cout << "Ingrese el exponente: ";
    std::cin >> exp;

    printf("%i ^ %i = %i", base, exp, funpot(base, exp));

    getch();
    return 0;
}

int funpot(int a, int b)
{
    int result = 1;

    for (int i = 0; i < b; i++)
    {
        result *= a;
    }

    return result;
}