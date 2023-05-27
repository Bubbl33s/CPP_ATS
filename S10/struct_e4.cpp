#include <iostream>
#include <conio.h>

struct prom
{
    float nota_1, nota_2, nota_3;
};

struct miembros
{
    char nombre[30], sexo[10];
    int edad;
    struct prom notas;
}alumno_1;

int main()
{
    float prom;
    std::cout << "\nPROMEDIO DE UN ALUMNO\n\n";

    // Pidiendo datos
    fflush(stdin);
    std::cout << "Ingrese su nombre: ";
    std::cin.getline(alumno_1.nombre, 30, '\n');
    std::cout << "Ingrese su sexo: ";
    std::cin.getline(alumno_1.sexo, 10, '\n');
    std::cout << "Ingrese su edad: ";
    std::cin >> alumno_1.edad;
    std::cout << std::endl << "Nota 1: ";
    std::cin >> alumno_1.notas.nota_1;
    std::cout << "Nota 2: ";
    std::cin >> alumno_1.notas.nota_2;
    std::cout << "Nota 3: ";
    std::cin >> alumno_1.notas.nota_3;
    std::cout << "\n\n";

    // Calculando promedio
    prom = (alumno_1.notas.nota_1 + alumno_1.notas.nota_2 + alumno_1.notas.nota_3) / 3;

    std::cout << alumno_1.nombre;

    //  Imprimiendo datos incluyendo promedio
    printf("Datos del alumno:\n\n");
    printf("Nombre: %s\nSexo: %s\nEdad: %i\nPromedio: %f\n",
            alumno_1.nombre, alumno_1.sexo, alumno_1.edad, prom);

    getch();
    return 0;
}