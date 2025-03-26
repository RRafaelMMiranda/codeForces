#include <iostream>
#include <string>
#include <cstring>

int main (void)
{
    int numero = 0;
    std::cin >> numero;

    bool naolucky = true;

    int lucky[] = {4, 7, 44, 77, 47, 447, 474, 444, 477, 744, 747, 777};

    for (int i = 0; i < 12; i++)
    {
        if (numero % lucky[i] == 0)
        {
            naolucky = false;
            break;
        }  
    }

    if (naolucky)
    {
        std::cout << "NO";
    }
    else 
    {
        std::cout << "YES";
    }

}