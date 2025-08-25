#include <bits/stdc++.h>

using namespace std;

int main (void)
{
    vector<int> numeros;
    for (int i = 0; i < 4; i++)
    {
        int aux;
        cin >> aux;
        numeros.push_back(aux);
    }

    int resposta = abs((numeros[0] + numeros[3]) - (numeros[2] + numeros[1]));
    cout << resposta << endl;
}