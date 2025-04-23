/*esse algoritmo recebe dois numeros inteiro e verifica se a soma deles 
é maior, menor ou igual a 10*/



#include <stdio.h>

int main() {
    int num1, num2, soma;

    printf("Digite o primeiro número: ");
    scanf("%d", &num1);

    printf("Digite o segundo número: ");
    scanf("%d", &num2);

    soma = num1 + num2;

    if (soma >= 10) {
        printf("A soma dos números é maior ou igual a 10.\n");
    } else {
        printf("A soma dos números é menor que 10.\n");
    }

    return 0;
}
