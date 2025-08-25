#include <iostream>
#include <vector>

int main (void)
{
    int posicaon = 0;
    int pulok = 0;
    std::cin >> posicaon >> pulok;
    std::vector<char> lagoa(posicaon + 1);
    for (int i = 0; i < posicaon; i++)
    {
        std::cin >> lagoa[i];
    }

    int contador = 0;

    for (int i = 0; i < posicaon; i++)
    {
        if (lagoa[i] == '#')
        {
            contador++;
        }
        if (contador >= pulok)
        {
            std::cout << "NO" << std::endl;
            return 0;
        }

        if (lagoa[i] == '.')
        {
            contador = 0;
        }
    }
    //std::cout << contador << std::endl;
    std::cout << "YES" << std::endl;
}