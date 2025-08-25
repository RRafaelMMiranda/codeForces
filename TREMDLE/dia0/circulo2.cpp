#include <iostream>
#include <cmath>
#include <cstring>
#include <vector>

typedef struct circulo
{
    int pontoa;
    int pontob;
}circulo;


int main (void)
{
    int npontos = 0;
    int msegmentos = 0;

    std::cin >> npontos;
    std::cin >> msegmentos;

    std::vector<circulo> figura(msegmentos);
    std::vector<circulo> figuraaux(msegmentos);

    if (msegmentos == 1)
        {
            std::cout << "No" << std::endl;
            return 0;
        }
    for (int i = 0; i < msegmentos; i++)
    {
        std::cin >> figura[i].pontoa >> figura[i].pontob;
    }

    strcpy(figuraaux, figura);


    for (int i = 1; i < npontos; i++)
    {
        figuraaux[i].pontoa += i;
        figuraaux[i].pontob
    }
} 