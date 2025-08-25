#include <bits/stdc++.h>

using namespace std;

class Pares{
    public:
    int X;
    int Y
};

int main ()
{
    long long int estudantes = 0, Mparesgostam = 0, Dparesodeiam = 0;
    cin >> estudantes >> Mparesgostam >> Dparesodeiam;

    vector<Pares> segostam;
    vector<Pares> seodeiam;

    for (int i = 0; i < Mparesgostam; i++)
    {
        Pares aux;
        cin >> aux.X >> aux.Y;
        segostam.push_back(aux);
    }
        for (int i = 0; i < Dparesodeiam; i++)
    {
        Pares aux;
        cin >> aux.X >> aux.Y;
        seodeiam.push_back(aux);
    }
    for (int i = 0; i < estudantes/3; i++)
    {
        int aux1 = 0, aux2 = 0, aux3 = 0;
        if ()

    }

}