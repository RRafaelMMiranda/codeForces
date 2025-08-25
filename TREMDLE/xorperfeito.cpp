#include <iostream>
#include <cstdint>
#include <bitset>
#include <string>

int main (void)
{
    std::bitset<64>(numeroref);
    numeroref = 6;
    std::cout << "? " << numeroref.to_ullong() << std::endl << std::flush;
    
    int64_t numerodado;
    std::cin >> numerodado;
    std::bitset<64> dadodado(numerodado);

    std::string inicial = numeroref.to_string<char>();
    std::string resultado = dadodado.to_string<char>();
    std::string escondido;

    /*for (int i = 0; i < inicial.length(); i++)
    {
        if (inicial[i] == 0 && resultado[i] == 0)
        {
            escondido[i] = 0;
        }
        else if (inicial[i] == 0 && resultado[i] == 1)
        {
            escondido[i] = 1;
        }
        else if (inicial[i] == 1 && resultado[i] == 1)
        {
            escondido[i] = 0;
        }
        else if (inicial[i] == 1 && resultado[i] == 0)
        {
            escondido[i] = 1;
        }
    }*/

    std::bitset<64> escondeu(escondido);

    std::cout << escondeu << std::endl;
}