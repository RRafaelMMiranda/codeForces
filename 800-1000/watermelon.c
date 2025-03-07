#include <stdio.h>

int main (void)
{
    int pesodamelancia = 0;
    scanf("%i", &pesodamelancia);

    if ((pesodamelancia % 2) == 0 && pesodamelancia > 2)
    {
        printf("YES\n");
    } 
    else
        printf("NO\n");


}