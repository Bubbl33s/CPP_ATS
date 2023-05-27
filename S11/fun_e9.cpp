// CONVERTIR SEGUNDOS A HH:MM:SS

#include <iostream>
#include <conio.h>

void timeConverter(int t);

int main()
{
    int seg;

    std::cout << "\nIngrese una cantidad de segundos: ";
    std::cin >> seg;

    std::cout << std::endl;
    timeConverter(seg);

    getch();
    return 0;
}

void timeConverter(int s)
{
    int og_time = s, m, h;

    h = s / 3600; s %= 3600;
    m = s / 60; s %= 60;

    std::cout << og_time << " segundos equivalen a " << h << ":" << m << ":" << s << std::endl;
}