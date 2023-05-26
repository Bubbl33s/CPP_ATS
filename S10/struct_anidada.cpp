#include <iostream>
#include <conio.h>

struct info_direccion
{
    char direccion[30];
    char ciudad[20];
    char provincia[20];
};

struct empleado
{
    char nombre[20];
    struct info_direccion dir_empleado;
    double salario;
}empleados[2];

int main()
{
    for (int i = 0; i < 2; i++)
    {
        fflush(stdin);
        std::cout << "Digite su nombre: ";
        std::cin.getline(empleados[i].nombre, 20, '\n');
        std::cout << "Digite su direccion: ";
        std::cin.getline(empleados[i].dir_empleado.direccion, 30, '\n');
        std::cout << "Ciudad: ";
        std::cin.getline(empleados[i].dir_empleado.ciudad, 20, '\n');
        std::cout << "Provincia: ";
        std::cin.getline(empleados[i].dir_empleado.provincia, 20, '\n');
        std::cout << "Salario: ";
        std::cin >> empleados[i].salario;
        std::cout << std::endl;
    }

    for (int i = 0; i < 2; i++)
    {
        std::cout << "Nombre: " << empleados[i].nombre << std::endl;
        std::cout << "Direccion: " << empleados[i].dir_empleado.direccion << std::endl;
        std::cout << "Ciudad: " << empleados[i].dir_empleado.ciudad << std::endl;
        std::cout << "Provincia: " << empleados[i].dir_empleado.provincia << std::endl;
        std::cout << "Salario: S/. " << empleados[i].salario << std::endl;
        std::cout << std::endl;
    }

    getch();
    return 0;
}