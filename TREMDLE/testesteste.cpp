#include <iostream>
#include <cstdint>
#include <bitset>
#include <string>

int main (void)
{
    int64_t numeroref = 6;
    std::cout << "? " << numeroref << std::endl << std::flush;

    int64_t coisadoida = 0;
    std::cin >> coisadoida;

    int64_t escondido = 0;
    escondido = numeroref ^ coisadoida;
    std::cout << "! " << escondido << std::endl;


}