#include <iostream>

using namespace std;

int main (void)
{
    int ntestes = 0;
    int pares = 0;
    int impares = 0;

    cin >> ntestes;

    int numeros[ntestes];

    for (int i = 0; i < ntestes; i++)
    {
        cin >> numeros[i];
    }

    int par = 0, impar = 0;

    for (int i = 0; i < 3; i++)
    {
        if (numeros[i] % 2 == 0)
        {
            par++;
        }
        else
            impar++;
    }

    for (int r = 0; r < ntestes; r++)
    {
        if (par < impar || par == 0)
        {
            if (numeros[r] % 2 == 0)
            {
                cout << r + 1;
                break;
            }
        }
        else
        {
            if (numeros[r] % 2 != 0)
            {
                cout << r + 1;
                break;
            }
        }
    }
}