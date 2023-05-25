#include <iostream>
#include <conio.h>

int main()
{
    float n1, n2, n3, prom = 0;

    std::cout << "Ingrese la nota 1: ";
    std::cin >> n1;
    std::cout << "Ingrese la nota 2: ";
    std::cin >> n2;
    std::cout << "Ingrese la nota 3: ";
    std::cin >> n3;

    prom = (n1 + n2 + n3) / 3;

    printf("\nPromedio de las notas: %.2f", prom);

    getch();

    return 0;
}