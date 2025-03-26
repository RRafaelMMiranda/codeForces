#include <iostream>
#include <algorithm>
 
int main (void)
{
    int ntestes = 0;
    int contadorgood = 0;
 
    std::cin >> ntestes;
 
    int nelementos = 0;
 
 
    for (int i = 0; i < ntestes; i++)
    {
        std::cin >> nelementos;
        int numeros[nelementos];
        contadorgood = 0;
        
        for (int r = 0; r < nelementos; r++)
        {
            std::cin >> numeros[r];
        }

        int soma = 0;
        
        for (int r = 0; r < nelementos; r++)
        {
            if (numeros[r] == 0 && r == 0)
                {
                    contadorgood++;
                    continue;
                }
            for (int j = 0; j < r; j++)
            {
                
                if (numeros[j] == soma)
                {
                    contadorgood++;
                    std::cout << "uptadato: " << numeros[r] << std::endl;
                    break;
                }
            }
            soma += numeros[r];
        }

        std::cout << contadorgood << std::endl;
    }

    
    
}