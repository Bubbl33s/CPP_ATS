// PARTE FRACCIONARIA DE UN NÚMERO

#include <iostream>
#include <conio.h>

float frac(float);

int main()
{
    float x;

    std::cout << "\nIngrese un numero decimal: ";
    std::cin >> x;

    std::cout << "\nParte fraccionaria de " << x << ": " << frac(x) << std::endl;

    getch();
    return 0;
}

float frac(float num)
{
    return num - int(num);
}

    

    