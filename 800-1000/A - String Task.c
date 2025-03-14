#include <stdio.h>
#include <string.h>
#include <ctype.h>

int vogal(char caractere, char vogais[])
{   
    for (int i = 0; i < strlen(vogais); i++)
    {
        if (isalpha(caractere))
        {
            if (caractere == vogais[i])
        {
            return 1;
        }
        }
    }
    return 0;
}

void rodarstring(char texto[], int comeco) {
    int i = comeco;
    while (texto[i] != '\0') {
        texto[i] = texto[i + 1];
        i++;
    }
    texto[i] = '\0';
    return;
}

void adicionarponto(char texto[], int comeco)
{
    for (int i = strlen(texto); i >= comeco + 1; i--) {
        texto[i] = texto[i - 1];
    }
    texto[comeco] = '.'; 
    return;
}



int main (void)
{
    char texto[10000];
    fgets(texto, 10000, stdin);

    for(int i = 0; i < strlen(texto); i++)
    {
        if (texto[i] == '\n')
        {
            texto[i] = '\0';
            break;
        }
    }

    char vogais[] = "aeiyouAEIYOU";

    int tamanho = strlen(texto);

    for (int i = 0; i < tamanho; i++)
    {
        if (vogal(texto[i], vogais) == 1)
        {
            rodarstring(texto, i);
            i--;
            tamanho--;
        }
        else if (vogal(texto[i], vogais) == 0)
        {
            adicionarponto(texto, i);
            i++;
            tamanho++;
            texto[tamanho] = '\0';
        }
        if (isupper(texto[i]))
        {
            texto[i] = tolower(texto[i]);
        }
        
    }

    printf("%s", texto);
}