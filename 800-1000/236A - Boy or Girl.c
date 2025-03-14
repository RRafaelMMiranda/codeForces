#include <stdio.h>
#include <string.h>

int main (void)
{
    char nome[100];
    char copia[100];

    scanf("%s", nome);

    strcpy(copia, nome);

    int igual = 0;
    int distinct = 0;

    for (int i = 0; i < strlen(nome); i++)
    {
        igual = 0;
        for (int k = i; k < (strlen(copia) - 1); k++)
        {
            if (nome[i] == copia[k + 1])
            {
                igual = 1;
                break;
            }
        }
        if (igual == 0)
        {
            distinct++;
        }
    }

    if (distinct % 2 == 0)
    {
        printf("CHAT WITH HER!");
    }
    else 
        printf("IGNORE HIM!");
}