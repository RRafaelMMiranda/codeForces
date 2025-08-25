#include <iostream>
#include <vector>


int main (void)
{
    int ntestes = 0;
    std::cin >> ntestes;

    for (int i = 0; i < ntestes; i++)
    {
        int numeropilhas = 0;
        std::cin >> numeropilhas;
        std::vector<long long int> pilhas(numeropilhas);
        int turnos = 0;
        int maioresqueum = 0;
        for (int n = 0; n < numeropilhas; n++)
        {
            std::cin >> pilhas[n];
            if (pilhas[n] > 1)
            {
                maioresqueum++;
            }

        }
        for (int j = 0; j < numeropilhas; j++)
        {   
           if (j == numeropilhas - 1)
           {
            if (pilhas[j] > 2)
            {
                maioresqueum--;
            }
            turnos++;
            continue;
           }
           else if(pilhas[j] == 1 && j == 0)
           {
            turnos++;
            continue;
           }
           else if(pilhas[j] > 1)
           {
            turnos+= 2;
            maioresqueum--;
            continue;
           }

        }
        if (turnos % 2 == 0)
        {
            std::cout << "Second" << std::endl;
        }
            else std::cout << "First" << std::endl;
    }
    
}