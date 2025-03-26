#include <stdio.h>
#include <string.h>

int main (void)
{
    char frase[1000];
    fgets(frase, 1000, stdin);
    int tamanho = strlen(frase);
    int k = 0;

    char hello[] = {"hello"};

    for (int i = 0; i < tamanho; i++)
    {
        if (frase[i] == hello[k] && k == 0)
        {
            k++;
        }
        else if (frase[i] == hello[k] && k == 1)
        {
            k++;
        }
        else if (frase[i] == hello[k] && k == 2)
        {
            k++;
        }
        else if (frase[i] == hello[k] && k == 3)
        {
            k++;
        }
        else if (frase[i] == hello[k] && k == 4)
        {
            k++;
        }
        if (k == 5)
        {
            break;
        }
    }
    if (k == 5)
    {
        printf("YES");
    }
        else
        printf("NO");    
}