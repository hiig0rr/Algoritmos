#include <stdio.h>

int main() {
    float R1, R2, Req;

    printf("Digite o valor da resistência R1:");
    scanf("%f", &R1);

    printf("Digite o valor da resistência R2:");
    scanf("%f", &R2);

    if (R1 + R2 == 0) {
        printf("Erro: Soma das resistências não pode ser zero.\n");
    } else {
        Req = (R1 * R2) / (R1 + R2);
        printf("A resistência equivalente é: %.2f ohms\n", Req);
    }

    return 0;
}