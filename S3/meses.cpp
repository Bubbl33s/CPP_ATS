#include <iostream>
#include <conio.h>

int main()
{
    int mes;

    std::string meses[] = {"Enero", "Febrero", "Marzo", "Abril", "Mayo", "Junio", "Julio",
                            "Agosto", "Setiembre", "Octubre", "Noviembre", "Diciembre"};
    
    printf("\n\tMES SEGUN NUMERO\n\n");

    std::cout << "Ingrese un numero (1 - 12): ";
    std:: cin >> mes;

    std::cout << "\nEl numero " << mes << " hace referencia al mes " << meses[mes - 1] << std::endl;

    getch();

    return 0;
}