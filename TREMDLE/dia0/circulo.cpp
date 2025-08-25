#include <iostream>
#include <cmath>

typedef struct circulo
{
    int pontoa;
    int pontob;
    int dist;
}circulo;


int main (void)
{
    int npontos = 0;
    int msegmentos = 0;

    std::cin >> npontos;
    std::cin >> msegmentos;

    circulo figura[msegmentos];

    if (msegmentos == 1)
        {
            std::cout << "No" << std::endl;
            return 0;
        }
    for (int i = 0; i < msegmentos; i++)
    {
        std::cin >> figura[i].pontoa >> figura[i].pontob;
        figura[i].dist = abs(figura[i].pontob - figura[i].pontoa);
    }

    double espelho = msegmentos/2.0;

    if (fmod(npontos, espelho) == 0)
    {
        int quantidadelado1 = 0;
        int quantidadelado2 = 0;
        int somadasdifs = 0;
        for (int i = 0; i < msegmentos; i++)
        {
            somadasdifs += figura[i].dist;
            if (figura[i].pontoa <= npontos/2)
            {
                quantidadelado1++;
            }
            else if (figura[i].pontoa > npontos/2)
            {
                quantidadelado2++;
            }          
        }
        if (somadasdifs % msegmentos == 0)
            {
                if (quantidadelado1 == quantidadelado2)
                {
                    std::cout << "Yes" << std::endl;
                }
            }
        if (quantidadelado1 != quantidadelado2)
        {
            std::cout << "No quanti lado" << std::endl;
            return 0;
        }  
        //std::cout << quantidadelado1 << std::endl;
        //std::cout << quantidadelado2 << std::endl;
    } 
    else
    {
        std::cout << "No" << std::endl;
    }   
} 