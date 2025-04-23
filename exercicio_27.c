/*esse algoritmo recebe um valor em float e converte ele em um numero inteiro*/



#include <stdio.h>

int main() {
    float valor;
    int valorInteiro;

    printf("Digite um valor em float: ");
    scanf("%f", &valor);

    valorInteiro = (int)valor; 

    printf("O valor convertido para inteiro é: %d\n", valorInteiro);

    return 0;
}
