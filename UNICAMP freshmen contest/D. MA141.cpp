#include <bits/stdc++.h>

using namespace std;

class Ponto{
    public:
    int X;
    int Y;
};

int main (void)
{
    vector<Ponto> listapontos;
    vector<int> dist;
    
    for (int i = 0; i < 4; i++)
    {
        Ponto aux;
        cin >> aux.X >> aux.Y;
        listapontos.push_back(aux);
    }

    dist.push_back(sqrt(pow(listapontos[3].X - listapontos[0].X,2) + pow(listapontos[3].Y - listapontos[0].Y,2)));
    for (int i = 0; i < 3; i++)
    {
        int dista = sqrt(pow(listapontos[i+1].X - listapontos[i].X,2) + pow(listapontos[i+1].Y - listapontos[i].Y,2));
        dist.push_back(dista);
    }
        if(dist[3] != dist[0])
        {
            cout << "NAO" << endl;
            return 0;
        }

    for (int i = 0; i < 3; i++)
    {
        if(dist[i] != dist[i+1])
        {
            cout << "NAO" << endl;
            return 0;
        }
    }
    cout << "SIM" << endl;

}