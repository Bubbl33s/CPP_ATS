#include <iostream>
#include <conio.h>

struct Persona
{
    char nombre[20];
    int edad;
}
persona_1 = {"Alejandro", 20},
persona_2 = {"Andre", 22};


int main()
{
    std::cout << "Persona 1:" << std::endl << std::endl;
    std::cout << "Nombre: " << persona_1.nombre << std::endl;
    std::cout << "Edad: " << persona_1.edad << std::endl;

    std::cout << std::endl;

    std::cout << "Persona 2:" << std::endl << std::endl;
    std::cout << "Nombre: " << persona_2.nombre << std::endl;
    std::cout << "Edad: " << persona_2.edad << std::endl;

    getch();
    return 0;
}