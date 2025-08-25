#include <iostream>
#include <vector>
#include <numeric>

bool primo(int a)
{
    if (a == 0 || a == 1) {
        return false;
      }
      for (int i = 2; i <= a/2; ++i) {
        if (a % i == 0) {
          return false;
        }
      }
      return true;
      
}

int main (void)
{
    int ovosn = 0;
    std::cin >> ovosn;

    std::vector<long long int> lista (ovosn);

    bool todosmultiplos = true;
    std::cin >> lista[0];
    long long int menor = lista[0];

    for (int i = 1; i < lista.size(); i++)
    {
        std::cin >> lista[i];
    }
    
    bool temosum = false;

    for (int i = 0; i < lista.size(); i++)
    {
        if (lista[i] % menor != 0 || lista[i] == 1)
        {
            todosmultiplos = false;
        }
        if (lista[i] == 1)
        {
            temosum = true;
        }
    }
    if (todosmultiplos == true)
    {
        std::cout << -1 << std::endl;
    }
    else if (todosmultiplos == false)
    {
        int opp = 0;
        if (temosum == true)
        {
            for (int r = 0; r < ovosn; r++)
            {
                if (lista[r] == 1)
                {
                    continue;
                }
                else    
                    opp++;
            }std::cout << opp << std::endl;
        }
        else{
            for (int r = 0; r < ovosn; r++)
            {
                int gcd = std::gcd(lista[r], lista[r+1]);
                if (gcd < lista[r] && gcd < lista[r + 1])
                {
                    opp++;
                    if (lista[r] > lista[r+1])
                    {
                        lista[r+1] = gcd;
                    }
                    else if (lista[r] < lista[r+1])
                    {
                        lista[r] = gcd;
                    }
                    
                    r = 0;
                }
                else if (lista[r] == 1)
                {
                    opp += ovosn - 1;
                    break;
                }
            }
            std::cout << opp << std::endl;
            
        }
        

    }


}