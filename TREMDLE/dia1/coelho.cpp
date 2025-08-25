#include <iostream>

int main (void)
{
    int cord = 0;
    int contasaltos = 0;
    std::cin >> cord;

    contasaltos += cord/5;
    cord = cord % 5;

    contasaltos += cord/4;
    cord = cord % 4;

    contasaltos += cord/3;
    cord = cord % 3;

    contasaltos += cord/2;
    cord = cord % 2;

    contasaltos += cord;

    std::cout << contasaltos << std::endl;
}