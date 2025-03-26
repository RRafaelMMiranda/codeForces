#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(void)
{
    long long int ngrupos = 0;
    int alocador = 0;
    scanf("%lli", &ngrupos);

    int grupos[5] = {0, 0, 0, 0, 0};

    for (int i = 0; i < ngrupos; i++) {
        scanf("%i", &alocador);
        grupos[alocador]++;
        }

    int totalcarros = 0;
    totalcarros += grupos[4] + grupos[3];
    totalcarros += grupos[2] / 2;

    if(grupos[2] % 2 != 0)
    {
        totalcarros++;
        grupos[1] -= 2;
    }
    
    grupos[1] -= grupos[3];

    if (grupos[1] < 0)
    {
        grupos[1] = 0;
    }

    if (grupos[1] != 0)
    {
        totalcarros += ceil(grupos[1] / 4.0);
    }

    printf("%i", totalcarros);
    return 0;
}

