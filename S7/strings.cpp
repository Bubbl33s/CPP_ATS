#include <iostream>
#include <conio.h>
#include <string.h>

int main()
{
    char cad_1[] = "Hola que tal ", nombre[20], cad_2[35];

    std::cout << "Ingrese su nombre: ";
    std::cin.getline(nombre, 20, '\n');

    strcpy(cad_2, cad_1);
    strcat(cad_2, nombre);

    printf("\n%s\n%s\n%s\n", cad_1, nombre, cad_2);
    std::cout << strlwr(cad_2) << std::endl;
    std::cout << strupr(cad_2) << std::endl;
    std::cout << strrev(cad_2) << std::endl;

    getch();
    return 0;
}