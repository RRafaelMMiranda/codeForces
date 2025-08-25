#include <bits/stdc++.h>

using namespace std;

int main (void)
{
    int N = 0;
    cin >> N;

    vector<long long int> pal;
    for (int i = 0; i < N; i++)
    {
        long long int aux;
        cin >> aux;
        pal.push_back(aux);
    }

    int tamanho = N/2;
    int contador = 0;

    for (int j = 0; j < tamanho; j++)
    {
        if (pal[j] == pal[N-j-1])
        {
            continue;
        }
        else if (pal[j] != pal[N-j-1])
        {
            pal[j] = pal[j] + pal[j+1];
            auto it = pal.begin() + j;
            pal.erase(it);
            j = -1;
            tamanho--;
            N--;
            contador++;
        }     
    }
    for (auto i : pal)
        cout << i << endl;
    cout << "é palíndromo" << endl;

}