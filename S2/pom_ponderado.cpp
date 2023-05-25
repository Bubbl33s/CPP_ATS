#include <iostream>
#include <conio.h>

int main()
{
    float n_pra, n_teo, n_par, prom;

    printf("\tPROMEDIO PONDERADO\n\n");

    std::cout << "Nota de practica: ";
    std::cin >> n_pra;
    std::cout << "Nota teorica: ";
    std::cin >> n_teo;
    std::cout << "Nota de participacion: ";
    std::cin >> n_par;

    prom = (n_pra * 0.6) + (n_teo * 0.3) + (n_par * 0.1);

    printf("\nPromedio ponderado: %.2f", prom);

    getch();
    
    return 0;
}