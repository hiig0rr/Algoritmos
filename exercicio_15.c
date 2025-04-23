/*esse algoritmo soma dois numeros inteiros e depois calcula a media deles*/



#include <stdio.h>
int main() {
    int num1, num2, num3, soma;
    float media;

    printf("Digite o primeiro número inteiro: ");
    scanf("%d", &num1);

    printf("Digite o segundo número inteiro: ");
    scanf("%d", &num2);

    printf("Digite o terceiro número inteiro: ");
    scanf("%d", &num3);

    soma = num1 + num2 + num3;
    media = soma / 3.0;

    printf("Soma: %d\n", soma);
    printf("Média: %.2f\n", media);

    return 0;
}
