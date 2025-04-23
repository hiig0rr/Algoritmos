/*esse algoritmoa coleta dois numeros e devolve o resultado deles obrigatoriamente
como um numero inteiro*/



#include <stdio.h>

int main() {
    int num1, num2, resultado;
    printf("Digite o primeiro número inteiro: ");
    scanf("%d", &num1);
    
    printf("Digite o segundo número inteiro: ");
    scanf("%d", &num2);
    if (num2 == 0) {
        printf("Erro! Não é possível dividir por zero.\n");
    } else {
        if (num1 % num2 == 0) {
            resultado = num1 / num2;  // Realiza a divisão inteira
            printf("Resultado da divisão: %d\n", resultado);
        } else {
            printf("A divisão dos números não resulta em um número inteiro.\n");
        }
    }

    return 0;
}
