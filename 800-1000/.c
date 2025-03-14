#include <stdio.h>
#include <string.h>

// Função para remover um caractere na posição `começo` da string
void rodarstring(char texto[], int começo) {
    int i = começo;
    while (texto[i] != '\0') {
        texto[i] = texto[i + 1];
        i++;
    }
}

int main(void) {
    char texto[100];
    
    // Leitura da string
    fgets(texto, 100, stdin);

    // Remove o '\n' que o fgets pode deixar na string
    for (int i = 0; i < strlen(texto); i++) {
        if (texto[i] == '\n') {
            texto[i] = '\0';
            break;
        }
    }

    // Array de vogais
    char vogais[] = "aoyeuiAOYEUI"; // Melhor usar como string

    int texto_len = strlen(texto);  // Tamanho da string texto
    int vogais_len = strlen(vogais); // Tamanho da string vogais

    // Loop para verificar se há vogais e removê-las
    for (int i = 0; i < texto_len; i++) {
        for (int k = 0; k < vogais_len; k++) {
            if (texto[i] == vogais[k]) {
                rodarstring(texto, i);
                texto_len--;  // Decrease the length since a character was removed
                i--;  // Decrease the index to check the next character
                break;  // No need to check other vowels
            }
        }
    }

    // Imprime a string modificada
    printf("%s", texto);

    return 0;
}
