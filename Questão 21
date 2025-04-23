#include <stdio.h>

int main() {
    int num1, num2, resto;

    printf("Digite dois números inteiros: ");
    scanf("%d %d", &num1, &num2);

    if (num2 == 0) {
        printf("Divisão por zero não é permitida.\n");
    } else {
        resto = num1 % num2;

        printf("O resto da divisão de %d por %d e %d.\n", num1, num2, resto);

        if (resto % 2 != 0) {
            printf("O resto e ímpar.\n");
        } else {
            printf("O resto e par.\n");
        }
    }

    return 0;
}