#include <iostream>
#include <conio.h>
#include <string.h>

int main()
{
    char name[30], *dir_name;
    dir_name = name;

    int count = 0;

    std::cout << "\nDigite su nombre: ";
    std::cin.getline(name, 30, '\n');

    strlwr(name);

    std::cout << "\n\n";

    while (*dir_name)
    {
        switch (*dir_name)
        {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u': count++;
        }
        dir_name++;
    }

    std::cout << name << " contiene " << count << " voacles\n\n";

    getch();
    return 0;
}