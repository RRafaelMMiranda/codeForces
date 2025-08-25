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
    int contaum = 0;

    for (int i = 1; i < lista.size(); i++)
    {
        std::cin >> lista[i];
        if (lista[i]<=menor)
        {
            menor = lista[i];
        }

    }

    for (int i = 0; i < lista.size(); i++)
    {
        if (lista[i] % menor != 0)
        {
            todosmultiplos = false;
        }
    }
    if (todosmultiplos == true)
    {
        std::cout << -1 << std::endl;
    }
    else if (todosmultiplos == false)
    {
        /*for (int r = 0; r < ovosn; r++)
        {
            if (lista[index] >= lista[index+1])
            {
                lista[index] = std::gcd(lista[index], lista[index+1]);
            }
            else if (lista[index] < lista[index+1])
            {
                lista[index+1] = std::gcd(lista[index], lista[index+1]);
            }
        }*/
       int opp = 0;
       int novoopp = 0;
        for (int r = 0; r < ovosn; r++)
        {
            if (lista[r] % lista[r + 1] == 0 && lista[r] != 1)
            {
                opp++;
                continue;
                
            }
            else if (lista[r + 1] % lista[r] != 0)//lista[r + 1] > lista[r] && 
            {
                lista[r] =  std::gcd(lista[r], lista[r+1]);
                opp++;
            }
            if (lista[r] == 1)
            {
                novoopp = opp + ovosn - contaum;
                break;
            }
        }
        std::cout << novoopp << std::endl;

    }


}