#include <iostream>
#include <cmath>

int main (void)

{
    int a, b, c;
    int resultado[4] = {0, 0, 0 ,0};

    std::cin >> a >> b >> c;

    int possibilidade1 = a + b;
    int possibilidade2 = a * b;
    int possibilidade5 = b + c;
    int possibilidade6 = b * c;

    if (possibilidade1 >= possibilidade2)
    {
        int possibilidade3 = possibilidade1 + c;
        int possibilidade4 = possibilidade1 * c;

        if (possibilidade3 >= possibilidade4)
        {
            resultado[0] = possibilidade3;        
        }
        else
            resultado[0] = possibilidade4;
    }
    else
    {
        int possibilidade3 = possibilidade2 + c;
        int possibilidade4 = possibilidade2 * c;

        if (possibilidade3 >= possibilidade4)
        {
            resultado[1] = possibilidade3;        
        }
        else
            resultado[1] = possibilidade4;
    }

    if (possibilidade5 >= possibilidade6)
    {
        int possibilidade3 = possibilidade5 + a;
        int possibilidade4 = possibilidade5 * a;

        if (possibilidade3 >= possibilidade4)
        {
            resultado[2] = possibilidade3;        
        }
        else
            resultado[2] = possibilidade4;
    }
    else
    {
        int possibilidade3 = possibilidade6 + a;
        int possibilidade4 = possibilidade6 * a;

        if (possibilidade3 >= possibilidade4)
        {
            resultado[3] = possibilidade3;        
        }
        else
            resultado[3] = possibilidade4;
    }

    int maior = resultado[0];

    for (int i = 0; i < 4; i++)
    {
        if (resultado[i] >= maior)
        {
            maior = resultado[i];
        }
    }

    std::cout << maior;
    return 0;
}