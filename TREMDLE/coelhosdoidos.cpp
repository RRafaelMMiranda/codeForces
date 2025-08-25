#include <iostream>
#include <vector>

int main (void)
{
    std::vector<long long int> possibilidades(3);
    long long int d1 = 0;
    long long int d2 = 0;
    long long int d3 = 0;

    std::cin >> d1 >> d2 >> d3;

    long long int casamaisperto;
    if (d1 >= d2)
    {
        casamaisperto = d2;
    }
    else if (d2 > d1)
        {
            casamaisperto = d1;
        }
    possibilidades[0] = (d2 * 2) + (d1 * 2);
    possibilidades[1] = (d3 + d2 + d1);
    possibilidades[2] = (d3 * 2) + (casamaisperto * 2);
    long long int melhorcaso = possibilidades[0];

    for (int i = 0; i < 3; i++)     
    {
        if (melhorcaso > possibilidades[i])
        {
            melhorcaso = possibilidades[i];
        }
    }
    std::cout << melhorcaso;

}