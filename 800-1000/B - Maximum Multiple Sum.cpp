#include <iostream>
 
int main (void)
{
    int testes = 0;
    std::cin >> testes;
 
    for (int i = 0; i < testes; i++)
    {
        int numeroaserescolhido = 0;
        std::cin >> numeroaserescolhido;
 
        int possibilidade1 = numeroaserescolhido / 2;
        int possibilidade2 = numeroaserescolhido / 3;
 
        if (possibilidade2 >= possibilidade1)
        {
            std::cout << 3 << std::endl;
        }
        else 
            std::cout << 2 << std::endl;
    }
}