#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main (void)
{
    char texto1[100];
    char texto2[100];

    scanf("%s", &texto1);
    scanf("%s", &texto2);

    for(int i = 0; i < 100; i++)
    {
        texto1[i] = tolower(texto1[i]);
        texto2[i] = tolower(texto2[i]);
    }

    printf("%i", strcmp(texto1, texto2));
}