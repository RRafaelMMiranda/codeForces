#include <iostream>
#include <vector>

int main (void)
{
    int comeco = 0;
    int final = 0;

    std::cin >> comeco >> final;
    if (comeco == final)
    {
        std::cout << comeco << std::endl;
        return 0;
    }
    else if (final == comeco + 1)
    {
        std::cout << -1 << std::endl;
        return 0;
    }
    std::cout << (final - 1) << std::endl;

}