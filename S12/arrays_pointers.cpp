#include <iostream>
#include <conio.h>

int main()
{
    int nums[] = {1, 2, 3, 4, 5}, *dir_nums;

    dir_nums = nums;

    for (int i = 0; i < 5; i++)
    {
        std::cout << "Elemento [" << i << "]: " << *dir_nums++ << std::endl;
    }

    std::cout << std::endl;

    for (int i = 0; i < 5; i++)
    {
        std::cout << "Posicion de memoria " << nums[i] << ": " << dir_nums++ << std::endl;
    }

    getch();
    return 0;
}