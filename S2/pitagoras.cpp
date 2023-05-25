#include <iostream>
#include <conio.h>
#include <math.h>

int main()
{
    float cat_1, cat_2, hip;

    printf("\n\tTEOREMA DE PITÁGORAS\n\n");

    std::cout << "Cateto 1: ";
    std::cin >> cat_1;
    std::cout << "Cateto 2: ";
    std::cin >> cat_2;

    hip = sqrt(pow(cat_1, 2) + pow(cat_2, 2));

    printf("\nCateto: %.2f", hip);

    getch();
    
    return 0;
}