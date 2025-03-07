#include <stdio.h>
#include <string.h>

int main (void)
{
    int x = 0;
    int operacoes = 0;
    char comando[4];
    char soma = '+';
    char sub = '-';

    scanf("%i", &operacoes);
    for (int i = 0; i < operacoes; i++)
    {
        scanf("%s", comando);
        for (int r = 0; r < 3; r++)
        {
            if (comando[r] == soma)
            {
                x++;
                break;
            }
            else if (comando[r] == sub)
            {
                x--;
                break;
            }
        }
    }

    printf("%i", x);

}