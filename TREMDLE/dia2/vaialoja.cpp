#include <iostream>

int main (void)
{
    long long int ndinheiros = 0;
    int k = 0;
    int w = 0;
    

    std::cin >> k >> ndinheiros >> w;
    long long int soma = 0;
    for (int i = 1; i <= w; i++)
    {
        soma += k * i;
    }
    //std::cout << soma;
    int resp = 0;
    if (soma - ndinheiros <= 0)
    {
        resp = 0;
    }
    else 
        resp = soma - ndinheiros;

    std::cout << resp;


}