#include <iostream>
#include <conio.h>

template <class TIPOD>
void abs(TIPOD num);

int main()
{
    int n_1 = -5, n_2 = 5;
    float n_3 = -4.35, n_4 = 4.35;
    double n_5 = -894.356, n_6 = 894.356;

    abs(n_1);
    abs(n_2);
    abs(n_3);
    abs(n_4);
    abs(n_5);
    abs(n_6);

    getch();
    return 0;
}

template <class TIPOD>
void abs(TIPOD num)
{
    TIPOD aux = num;
    if (num < 0)
    {
        num *= -1;
    }

    std::cout <<"|"<< aux << "| = " << num << std::endl;
}