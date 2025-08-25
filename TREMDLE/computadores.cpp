#include <iostream>
#include <vector>

int main (void)
{
    int ntestes = 0;
    std::cin >> ntestes;
    for (int i = 0; i < ntestes; i++)
    {
        int nsoftwares = 0;
        int ramatualk = 0;
        std::cin >> nsoftwares >> ramatualk;
        std::vector<int> ramrequisitada(nsoftwares);
        std::vector<int> ramconquistada(nsoftwares);

        for (int j = 0; j < nsoftwares; j++)
        {
            std::cin >> ramrequisitada[j];
        }
        for (int j = 0; j < nsoftwares; j++)
        {
            std::cin >> ramconquistada[j];
        }

        for (int r = 0; r < ramconquistada.size(); r++)
        {
            if (ramrequisitada[r] <= ramatualk)
            {
                ramatualk += ramconquistada[r];
                ramconquistada.erase(ramconquistada.begin() + r);
                ramrequisitada.erase(ramrequisitada.begin() + r);
                r = 0;   
            }
        }
        std::cout << ramatualk << std::endl;
    }
}