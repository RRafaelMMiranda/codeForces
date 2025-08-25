#include <bits/stdc++.h>

using namespace std;

int main (void)
{
    int Kalfabeto = 0; 
    int Nmensagem = 0;

    cin >> Kalfabeto >> Nmensagem;
    set<char> alfabeto;
    string mensagem;
    for (int i = 0; i < Kalfabeto; i++)
    {
        char aux;
        cin >> aux;
        alfabeto.insert(aux);
    }
    cin >> mensagem;
    for(int i = 0; i < mensagem.size(); i++)
    {
        if (alfabeto.count(mensagem[i]) == 0)
        {
            cout << "N" << endl;
            return 0;
        }
    }
    cout << "S" << endl;

}
