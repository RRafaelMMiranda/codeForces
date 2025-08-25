#include <iostream>

int main (void)
{
    int a = 0;
    int b = 0;

    std::cin >> a >> b;
    if (a > b)
    {
        std::cout << b << " " << (a - b) / 2;
    }
    else if (b > a)
    {
        std::cout << a << " " << (b - a) / 2;
    }
    else if (a == b)
    {
        std::cout << a << " " << 0;
    }
}