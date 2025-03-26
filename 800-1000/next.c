#include <stdio.h>
#include <math.h>

int main (void)
{
    int ncriancas = 0;
    scanf("%i", &ncriancas);
    double totalc = 0;

    double grupos[ncriancas];
    for (int i = 0; i < ncriancas; i++)
    {
        scanf("%lf", &grupos[i]);
        totalc += grupos[i];
    }

    printf("%.lf", ceil(totalc/4.0));

}