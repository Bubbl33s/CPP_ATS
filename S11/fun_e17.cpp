// SUMA DE NÚMEROS COMPLEJOS

#include <iostream>
#include <conio.h>

struct complejo
{
    float real, imaginaria;
}nums[2];

void suma(complejo, complejo);

int main()
{
    for (int i = 0; i < 2; i++)
    {
        std::cout << "Numero 1:\n\tParte real: ";
        std::cin >> nums[i].real;
        std::cout << "\tParte imaginaria: ";
        std::cin >> nums[i].imaginaria;
        std::cout << std::endl;
    }

    suma(nums[0], nums[1]);

    getch();
    return 0;
}

void suma(complejo n_1, complejo n_2)
{
    std::cout << n_1.real + n_2.real << " + " << n_1.imaginaria + n_1.imaginaria << "i" << std::endl;
}