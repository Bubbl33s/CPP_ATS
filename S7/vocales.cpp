#include <iostream>
#include <conio.h>
#include <string.h>

int main()
{
    char frase[50];
    int c_a =0, c_e = 0, c_i = 0, c_o = 0, c_u = 0;

    printf("\n\tCONTEO DE VOCALES\n\n");

    std::cout << "Ingrese una frase: ";
    std::cin.getline(frase, 50, '\n');

    for (int i = 0; i < strlen(frase); i++)
    {
        switch (frase[i])
        {
        case 'a':
            c_a++;
            break;
        case 'e':
            c_e++;
            break;
        case 'i':
            c_i++;
            break;
        case 'o':
            c_o++;
            break;
        case 'u':
            c_u++;
            break;
        }
    }

    printf("\nCOINCIDENCIAS\n\n");
    printf("a = %i\ne = %i\ni = %i\no = %i\nu = %i", c_a, c_e, c_i, c_o, c_u);

    getch();
    return 0;
}