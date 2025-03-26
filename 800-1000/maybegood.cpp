#include <iostream>
#include <algorithm>
 
int main (void)
{
    int ntestes = 0;
 
    std::cin >> ntestes;
 
    int nelementos = 0;
 
 
    for (int i = 0; i < ntestes; i++)
    {
        std::cin >> nelementos;
         int coisa[nelementos];
         int soma = 0;
         int contadorgood = 0;
         int conta = 0;
         int contapassada = 0;
 
        for (int r = 0; r < nelementos; r++)
        {
            std::cin >> coisa[r];
            soma += coisa[r];
            if (r == 0 && coisa[r] == 0)
                {
                    contadorgood++;
                   //std::cout << "updatado " << r <<std::endl;
                    continue;
                }
           for (int s = 0; s < r; s++)
            {
                if ((soma - coisa[r]) == coisa[s] && coisa[r] != 0) // se houver um número, não incluso ele mesmo, que é um good
                {
                    contadorgood++;
                    //std::cout << "updatado " << r <<std::endl;
                    break;
                }
            }
 
        }
 
         std::cout << contadorgood << std::endl;
    }
}