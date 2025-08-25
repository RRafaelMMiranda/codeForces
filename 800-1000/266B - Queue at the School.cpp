#include <bits/stdc++.h>

using namespace std;

int main (void)
{
    int npessoas = 0;
    int tempo = 0;
    string s;
    cin >> npessoas >> tempo >> s;

    while (tempo != 0)
    {
        for (int i = 0; i < npessoas; i++)
        {
            if (s[i] == 'B' && s[i+1] == 'G')
            {
                s[i] = 'G';
                s[i+1] = 'B';
                i++;
            }
        }
    tempo--;
    }

    cout << s;
}