#include <bits/stdc++.h>

using namespace std;

int main (void)
{
    long long int Prof = 0;
    int R = 0, G = 0, X = 0;
    cin >> Prof >> R >> G >> X;

    long long int totalrecebido = 0;
    if (G*X > R)
    {
        totalrecebido += R*Prof;
    }
    else 
    {
        totalrecebido += Prof*G*X;
    }
    cout << totalrecebido << endl;


}