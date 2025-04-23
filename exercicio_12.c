/*esse algoritmo utiliza uma variavel tipo char que define um numero de letras especifico 
que pode ser inserido pelo usuario, formando uma palavra*/



#include <stdio.h>
#include <string.h>

int main() {
    char palavra[10];
    int tamanho;

    printf("Digite uma palavra com exatamente 5 letras: ");
    fgets(palavra, sizeof(palavra), stdin);
    
    palavra[strcspn(palavra, "\n")] = '\0';
    tamanho = strlen(palavra);

    if (tamanho == 5) {
        printf("Você digitou: %s\n", palavra);
    } else {
        printf("Erro: Você digitou %d letra(s). A palavra deve ter exatamente 5 letras.\n", tamanho);
    }

    return 0;
}
