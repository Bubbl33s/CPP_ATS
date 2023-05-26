#include <iostream>
#include <conio.h>
#include <time.h>

void b_secuencial(int, int[]);
void b_binaria(int, int[], int, int);
void compare(int);

int nums[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
int x;

int main()
{
    compare(x);

    getch();
    return 0;
}

void b_secuencial(int n, int num_list[])
{
    bool found = false;

    for (int i = 0; i < sizeof(num_list); i++)
    {
        if (n == num_list[i])
        {
            std::cout << n << " found in position " << i << std::endl;
            found = true;
            break;
        }
    }

    if (!found)
    {
        std::cout << n << " not found" << std::endl;
    }
}

void b_binaria(int n, int num_list[], int inicio, int fin)
{
    int mitad;
    bool found = false;

    while (inicio <= fin)
    {
        mitad = (inicio + fin) / 2;

        if (num_list[mitad] == n)
        {
            std::cout << n << " found in position " << mitad << std::endl;
            found = true;
            break;
        }
        
        else if (num_list[mitad] > n)
        {
            fin = mitad;
            mitad = (inicio + fin) / 2;
        }

        else
        {
            inicio = mitad;
            mitad = (inicio + fin) / 2;
        }
    }

    if (!found)
    {
        std::cout << n << " not found" << std::endl;
    }
}

void compare(int n)
{
    float initial_time, final_time;

    std::cout << "Input a number: ";
    std::cin >> x;

    std::cout << std::endl;

    initial_time = time(NULL);
    b_secuencial(x, nums);
    final_time -= time(NULL);
    std::cout << "Time: " << final_time - final_time << std::endl;

    initial_time = time(NULL);
    b_binaria(x, nums, 0, 9);
    final_time -= time(NULL);
    std::cout << "Time: " << final_time - final_time << std::endl;
}
