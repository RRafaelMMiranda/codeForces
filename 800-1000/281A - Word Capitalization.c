#include <stdio.h>
#include <ctype.h>

int main (void)
{
    char porra[1000];

    scanf("%s", porra);
    
    if (islower(porra[0]))
    {
        porra[0] = toupper(porra[0]);
    }

    printf("%s", porra);
}