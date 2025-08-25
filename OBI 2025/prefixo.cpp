#include <bits/stdc++.h>

using namespace std;

int main ()
{
    int tam1 = 0, tam2 = 0;
    string palavra1, palavra2;
    cin >> tam1 >> palavra1 >> tam2 >> palavra2;

    int contador = 0;

    if (tam1 >= tam2)
    {
        for (int i = 0; i < tam2; i++)
        {
            if (palavra1[i] == palavra2[i])
            {
                contador++;
            }
            else break;
        }
    }
    else if (tam1 < tam2)
    {
        for (int i = 0; i < tam1; i++)
        {
            if (palavra1[i] == palavra2[i])
            {
                contador++;
            }
            else break;
        }
    }
    cout << contador << endl;
}