#include <iostream>

int main (void)
{
    int a, b, c = 0;
    std::cin >> a >> b >> c;
    
    int novoc = c/4;
    int novob = b/2;
    int chocolates = 0;

    while (a != 0)
    {
        if (novob > 0 && novoc > 0)
        {
            chocolates += 7;
        }
        novob--;
        novoc--;
        a--;
    }
    
    std::cout << chocolates;   
}