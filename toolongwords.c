#include <stdio.h>
#include <string.h>

int main (void)
{
    int numerocoletado = 0;
    scanf("%i", &numerocoletado);

    char listadepalavras[numerocoletado][1000];

    for (int i = 0; i < numerocoletado; i++)
    {
        scanf("%s", &listadepalavras[i]);
        if (strlen(listadepalavras[i]) > 10)
        {
            printf("%c%i%c\n", listadepalavras[i][0], (strlen(listadepalavras[i]) - 2), listadepalavras[i][(strlen(listadepalavras[i]) - 1)]);
        }
        else
            printf("%s\n", listadepalavras[i]);
    }

}