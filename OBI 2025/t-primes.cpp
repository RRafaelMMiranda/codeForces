#include <bits/stdc++.h>

using namespace std;

int main (void)
{
    int numeros = 0;
    vector<long long int> lista;
    cin >> numeros;

    for (int i = 0; i < numeros; i++)
    {
        long long int x = 0;
        cin >> x;
        lista.push_back(x);
    }

    vector<long long int> corretos;
    for (int i = 0; i < lista.size(); i++)
    {
        int aux = sqrt(lista[i]);
        int contador = 0;
        for (int j = 1; j < aux; j++)
        {
            if (aux % j == 0)
            {
                contador++;
            }
            if (contador > 2)
            {
                break;
            }
        }
        if (contador == 2)
        {
            cout << "YES" << endl;
        }
        else cout << "NO" << endl;
    }
}