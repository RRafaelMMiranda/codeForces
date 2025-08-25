#include <iostream>
#include <vector>
#include <string>

int main (void)
{
    int nOvos = 0;
    std::cin >> nOvos;
    std::vector<std::string> padroes (nOvos);

    for (int i = 0; i < nOvos; i++)
    {
        std::cin >> padroes[i];
    }

    for (int i = 0; i < nOvos;i++)
    {
        if (nOvos == 1)
        {
            std::cout << padroes[0];
            return 0;
        }
        int contador = 1;
        for (int j = i + 1; j < nOvos; j++)
        {
            
            if (padroes[j] == padroes[i])
            {
                contador++;
            }
            if (contador > nOvos/2.0)
            {
                std::cout << padroes[i];
                return 0;
            }
        }
    }
    std::cout << "vixe";
}
