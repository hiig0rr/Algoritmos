/*esse algoritmo pega dois numeros reais e multiplica eles de forma que o
resultdo seja obrigatoriamente um numero inteiro*/



#include <stdio.h>
#include <math.h>

int main() {
    float num1, num2;
    float resultado;

    do {
        printf("digite dois números reais: ");
        scanf("%f %f", &num1, &num2);

        resultado = num1 * num2;

        if (fmod(resultado, 1.0) != 0) {
            printf("a multiplicacao resultou em %.2f, que nao e um numero inteiro\n", resultado);
        }

    } while (fmod(resultado, 1.0) != 0);

    printf("a multiplicacao resultou em %.0f\nque e um numero inteiro", resultado);

    return 0;
}
