#include <iostream>
#include <vector>
#include <cmath>

int main (void)
{
    int tamanho = 0;
    std::cin >> tamanho;
    std::vector<long long int> lista(tamanho);

    for (int i = 0; i < lista.size(); i++)
    {
        std::cin >> lista[i];
    }

    long long int contador = 0;
    long long int opp = 0;

    for (int i = 0; i < lista.size(); i++)
    {
        if (lista[i] == 0 || lista[i] + opp == 0)
        {
            continue;
        }
        else 
        {
            contador++;
            opp += 0 - lista[i];
        }
            
    }
    std::cout << contador << std::endl;

    
}