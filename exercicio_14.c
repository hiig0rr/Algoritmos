/*esse algoritmo declara dois valores reais e cinco caracteres dados pelo usuario*/



#include <stdio.h>

int main() {
    float valor1, valor2;
    char caractere_1, caractere_2, caractere_3, caractere_4, caractere_5;

    printf("Digite o primeiro valor real: ");
    scanf("%f", &valor1);

    printf("Digite o segundo valor real: ");
    scanf("%f", &valor2);

    printf("Insira o primeiro caractere: ");
    scanf(" %c", &caractere_1);

    printf("Insira o segundo caractere: ");
    scanf(" %c", &caractere_2);

    printf("Insira o terceiro caractere: ");
    scanf(" %c", &caractere_3);

    printf("Insira o quarto caractere: ");
    scanf(" %c", &caractere_4);

    printf("Insira o quinto caractere: ");
    scanf(" %c", &caractere_5);

    printf("\nValores reais digitados: %.2f e %.2f\n", valor1, valor2);
    printf("Caracteres digitados: %c %c %c %c %c\n", caractere_1, caractere_2, caractere_3, caractere_4, caractere_5);

    return 0;
}
