#include <stdio.h>
#include <math.h>

int main (void)
{
    long long int n = 0;
    long long int m = 0;
    long long int a = 0;
    scanf("%lli %lli %lli", &n, &m, &a);

    long long int resposta = 0;

    long long int pedras_n = (n + a - 1) / a;
    long long int pedras_m = (m + a - 1) / a;

    resposta = pedras_m * pedras_n;

    printf("%lli", resposta);

}