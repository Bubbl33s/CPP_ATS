#include <iostream>
#include <conio.h>

int main()
{
    int edad;
    char sexo;
    float altura;

    std::cout << "\tDATOS PERSONALES\n";

    std::cout << "\nIngrese su edad: "; std::cin >> edad;
    std::cout << "Ingrese su sexo (M/F): "; std::cin >> sexo;
    std::cout << "Ingrese su altura (en m): "; std::cin >> altura;

    std::cout << "\n\nSE MUESTRAN LOS DATOS\n\n";
    printf("Edad: %i\nSexo: %c\nAltura: %.2f m", edad, sexo, altura);

    getch();
    
    return 0;
}