#include <iostream>
#include <conio.h>

void pedirDatos();
void mostrarDatos();

int t_notas, *notas;

int main()
{
    pedirDatos();
    mostrarDatos();

    delete[] notas;

    getch();
    return 0;
}

void pedirDatos()
{
    std::cout << "\nDigite el tamano del arreglo: "; std::cin >> t_notas;

    notas = new int[t_notas];

    std::cout << "\n\nDigite los elementos del arreglo:\n";

    for (int i = 0; i < t_notas; i++)
    {
        std::cout << "Indice [" << i << "]: "; std::cin >> notas[i];
    }

    std::cout << "\n\n";
}

void mostrarDatos()
{
    std::cout << "[";

    for (int i = 0; i < (t_notas - 1); i++)
    {
        std::cout << notas[i] << ", ";
    }

    std::cout << notas[t_notas - 1] << "]\n\n";
}