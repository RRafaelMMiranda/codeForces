#include <bits/stdc++.h>

using namespace std;

int main (void)
{
    int S = 0, A = 0, B = 0;
    cin >> S >> A >> B;

    int maior = 1;
    int menor = 1000000;
    for (int i = A; i <= B; i++)
    {
        int soma_aux = 0;
        if (i < 10)
        {
            soma_aux += i;
        }
        else if (i < 100)
        {
            soma_aux += i % 10;
            soma_aux += i / 10;
        }
        else if (i < 1000)
        {
            soma_aux += i % 10;
            soma_aux += (i % 100) / 10;
            soma_aux += i / 100;
        }
        else if (i < 10000)
        {
            soma_aux += i % 10;
            soma_aux += (i % 100) / 10;
            soma_aux += (i % 1000) / 100;
            soma_aux += i / 1000;
        }
        else if (i == 10000)
        {
            soma_aux = 1;
        }
        if (soma_aux == S)
        {
            if (i >= maior)
            {
                maior = i;
            }
            if (i <= menor)
            {
                menor = i;
            }
        }
    }

    cout << menor << endl << maior << endl;
}