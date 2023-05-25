#include <iostream>
#include <conio.h>

int fibonacci(int);

int main()
{
    int n;

    printf("\n\tSERIE DE FIBONACCI\n\n");

    std::cout << "Ingrese el numero de terminos: ";
    std::cin >> n;
    std::cout << std::endl;

    for(int i = 0; i < n; i++)
    {
        std::cout << fibonacci(i) << " ";
    }

    getch();
    
    return 0;
}

int fibonacci(int ter)
{
    if(ter <= 1)
    {
        return 1;
    }

    else
    {
        return fibonacci(ter - 2) + fibonacci(ter - 1);
    }
}