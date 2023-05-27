#include <iostream>
#include <conio.h>

int sum_vec(int vec[]);

int main()
{
    int nums[] = {12, 54, 85, 65, 18, 27};

    for (int i = 0; i < 6; i++)
    {
        if (i == 5)
        {
            std::cout << nums[i];
        }
        else
        {
            std::cout << nums[i] << ", ";
        }
    }

    std::cout << "\n\n" << sum_vec(nums);

    getch();
    return 0;
}

int sum_vec(int vec[])
{
    int suma = 0;

    for (int i = 0; i < 6; i++)
    {
        suma += vec[i];
    }

    return suma;
}