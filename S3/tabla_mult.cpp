#include <iostream>
#include <conio.h>

int main()
{
    int num;

    printf("\n\tTABLA DE MULTIPLICAR\n\n");

    std::cout << "Ingrese un numero: ";
    std::cin >> num;
    
    for(int i = 1; i <= 20; i++)
    {
        printf("\n%i x %i = %i", num, i, num * i);
    }    

    getch();

    return 0;
}