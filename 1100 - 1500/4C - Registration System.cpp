#include <bits/stdc++.h>
 
using namespace std;
 
int main (void)
{
    int nrequests;
    map<string, int> setado;
 
    cin >> nrequests;
    for (int i = 0; i < nrequests; i++)
    {
        string aux;
        cin >> aux;
        if ((setado.count(aux) != 1))
        {
            setado.insert(pair<string,int>(aux, 1));
            cout << "OK" << endl;
        }
        else if (setado.count(aux) == 1)
        {
            string nova_aux = aux + to_string(setado[aux]);
            setado[aux]++;
            setado.insert(pair<string, int>(nova_aux,1));
            cout << nova_aux << endl;
        }
    }
}