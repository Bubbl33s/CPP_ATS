#include <iostream>
#include <conio.h>

void b_secuencial(int, int[]);

int main() {
    int nums[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int x;

    std::cout << "Input a number: ";
    std::cin >> x;

    std::cout << std::endl;

    b_secuencial(x, nums); 

    getch();
    return 0;
}

void b_secuencial(int n, int num_list[]){

    bool found = false;

    for (int i = 0; i < sizeof(num_list); i++){
        if (n == num_list[i]){
            std::cout << n << " found in position " << i << std::endl;
            found = true;
            break;
        }
    }

    if (!found){
        std::cout << n << " not found" << std::endl;
    }
}
