/*esse algoritmo recebe um número inteiro e informa ao usuario se ele é par ou ímpar*/



#include <stdio.h>

int main() {
    int numero;
    printf("Digite um número inteiro: ");
    scanf("%d", &numero);
    if (numero % 2 == 0) {
        printf("O número %d é par.\n", numero);
    } else {
        printf("O número %d é ímpar.\n", numero);
    }

    return 0;
}
