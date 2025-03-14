#include <stdio.h>

int main(void)
{
    int participantes = 0;
    int classificacao = 0;

    scanf("%i %i", &participantes, &classificacao);

    int pontos[participantes];

    for(int i = 0; i < participantes; i++)
    {
        scanf("%i", &pontos[i]);
    }


    int passados = 0;
    for (int i = 0; i < participantes; i++)
    {
        if (pontos[i] >= pontos[classificacao - 1] && pontos[i])
        {
            passados++;
        }
    }
    printf("%i", passados);
}