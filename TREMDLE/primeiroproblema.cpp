#include <iostream>
#include <vector>


int main (void)
{
    int n = 0;
    std::cin >> n;

    int aux = 0;
    for (int i = 0; i < n; i++)
    {
        std::cin >> aux;
        if (aux == 1)
        {
            std::cout << "HARD" << std::endl;
            return 0;
        }
    }
    std::cout << "EASY" << std::endl;

}