#include <iostream>
#include <conio.h>

int main()
{
    float precio_inicial, igv, precio_final;

    std::cout << "Ingrese el precio del producto: ";
    std::cin >> precio_inicial;

    igv = precio_inicial * 0.18;
    precio_final = precio_inicial + igv;

    std::cout << "\n\nPrecio final con IGV: S/. " << precio_final;
    printf("\n\nPrecio final con IGV: S/. %.2f", precio_final);

    getch();

    return 0;
}