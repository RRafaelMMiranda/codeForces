#include <iostream>

int main (void)
{
    int ntestes = 0;
    std::cin >> ntestes;

    for (int i = 0; i < ntestes; i++)
    {
        int n = 0;
        std::cin >> n;
        std::cout << (n * 4) + 1 << std::endl;
    }
}