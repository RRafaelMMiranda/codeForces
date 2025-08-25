#include <iostream>
#include <cmath>
#include <numeric>
#include <vector>


int main (void)
{
    int ladoa;
    int ladob;
    int ladoc;
    std::cin >> ladoa >> ladob >> ladoc;

    int x = sqrt((ladoa * ladob)/ ladoc);
    int y = ladoa / x;
    int z = ladob / x;

    std::cout << 4*(x + y + z);
 
}