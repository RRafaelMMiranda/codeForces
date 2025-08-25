#include <bits/stdc++.h>

using namespace std;

int main (void)
{
    int Ncaracteres = 0, Mborradas = 0, Kcomprimento = 0;
    cin >> Ncaracteres >> Mborradas >> Kcomprimento;
    
    string ciphertext;
    cin >> ciphertext;

    vector<string> listakeys;
    for (int i = 0; i < Mborradas; i++)
    {
        string aux;
        cin >> aux;
        listakeys.push_back(aux);
    }

    long long int posP = 0;
    cin >> posP;

    vector<int> indexadores;
    

    for (int i = Kcomprimento; i >= 0; i--)
    {
        long long int intervalosaux = pow(i, Mborradas);
        int contadorindex = 0;
        for (int j = 1; j <= intervalosaux; j += intervalosaux/Mborradas)
        {
            if (posP <= j)
            {
                indexadores.insert(indexadores.begin(), contadorindex);
            }
            contadorindex++;
        }
    }

    int contador = 0;
    for (int i = 0; i < Ncaracteres; i++)
    {
        if (ciphertext[i] == '#')
        {
            cout << listakeys[contador][indexadores[contador]];
            contador++;
        }
        else cout << ciphertext[i];
    }
        
}