#include <stdio.h>

int main(void)
{
    int respostas[3];
    int perguntas = 0;
    int checker = 0;
    int contador = 0;

    scanf("%i", &perguntas);

    for (int i = 0; i < perguntas; i++)
    {
        checker = 0;
        scanf("%i %i %i", &respostas[0], &respostas[1], &respostas[2]);
        for(int r = 0; r < 3; r++)
        {
            if (respostas[r] == 1)
            {
                checker++;
            }
        }

        if (checker > 1)
        {
            contador++;
        }
    }

    printf("%i", contador);

}