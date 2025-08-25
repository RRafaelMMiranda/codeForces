#include <iostream>
#include <vector>

int main (void)
{
    int ntestes = 0;
    std::cin >> ntestes;

    for (int i = 0; i < ntestes; i++)
    {
        int nbarras = 0;
        int turnos = 0;
        std::cin >> nbarras;
        std::vector<int> comprimentobarras(nbarras);
        for (int j = 0; j < nbarras; j++)
        {
            std::cin >> comprimentobarras[j];
            turnos += comprimentobarras[j] - 1;
        }

        if (turnos % 2 != 0)
        {
            std::cout << "errorgorn" << std::endl;
        }
        else
         std::cout << "maomao90" << std::endl;

    }
    
}