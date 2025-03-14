#include <stdio.h>
#include <string.h>

int main (void)
{
    char conta[100];
    fgets(conta, 100, stdin);
    int um = 0, dois = 0, tres = 0;
    for (int i = 0; i < strlen(conta);i++)
    {
        if (conta[i] == '1')
        {
            um++;
        }
        if (conta[i] == '2')
        {
            dois++;
        }
        if (conta[i] == '3')
        {
            tres++;
        }
    }

    int contadordeum = um - 1;

    if (um != 0)
    {
        for (int i = 0; i < um; i++)
        {   
            printf("1");
            if ((um > 1) && contadordeum != 0)
            {
                contadordeum--;
                printf("+");
            }
        }
    }

    if (um != 0 && (dois + tres) != 0)
    {
        printf("+");
    }

    int contadordedois = dois - 1;

    if (dois != 0)
    {
        for (int i = 0; i < dois; i++)
        {   
            printf("2");
            if ((dois > 1) && contadordedois != 0)
            {
                contadordedois--;
                printf("+");
            }
        }
    }

    if (dois != 0 && (tres) != 0)
    {
        printf("+");
    }

    int contadordetres = tres - 1;

    if (tres != 0)
    {
        for (int i = 0; i < tres; i++)
        {   
            printf("3");
            if (tres > 1 && contadordetres != 0)
            {
                printf("+");
                contadordetres--;
            }
        }
    }

}