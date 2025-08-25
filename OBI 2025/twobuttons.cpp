#include <bits/stdc++.h>

using namespace std;

int main (void)
{
    int ninicial = 0;
    int mfuturo = 0;
    cin >> ninicial >> mfuturo;

    int resposta = 0;

    while (ninicial != mfuturo)
    {
        if (ninicial > mfuturo)
        {
            resposta += ninicial - mfuturo;
            break;
        }
        else if (ninicial < mfuturo)
        {

        }
    }
    cout << resposta;


}