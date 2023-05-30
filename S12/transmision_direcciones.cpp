// Intercambiar dos valores usando punteros

#include <iostream>
#include <conio.h>

void intercambio(float *, float *);

int main()
{
    float num_1 = 25.68, num_2 = 61.75;

    std::cout << "\nPrimer numero: " << num_1 << "\nSegundo numero: " << num_2 << "\n";

    std::cout << "\nSe procede con el intercambio\n";

    intercambio(&num_1, &num_2);

    std::cout << "\nPrimer numero: " << num_1 << "\nSegundo numero: " << num_2 << "\n";

    getch();
    return 0;
}

void intercambio(float *dir_num_1, float *dir_num_2)
{
    float aux;

    aux = *dir_num_1;
    *dir_num_1 = *dir_num_2;
    *dir_num_2 = aux;
}