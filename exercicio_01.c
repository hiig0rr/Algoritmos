/*esse algoritmo identifica se o valor dado pelo usuario pertence a um triangulo valido
e se ele é um triângulo equilátero, isósceles ou escaleno*/



#include <stdio.h>
int main() {
    int lado_1, lado_2, lado_3;
    printf("Insira o lado 1");
    scanf("%d", &lado_1);

    printf("Insira o lado 2");
    scanf("%d", &lado_2);

    printf("Insira o lado 3");
    scanf("%d", &lado_3);
    if ((lado_1 + lado_2 > lado_3) && (lado_1 + lado_3 > lado_2) && (lado_2 + lado_3 > lado_1)) {
        if (lado_1 == lado_2 && lado_2 == lado_3) {
            printf("Triângulo Equilátero\n");
        } else if (lado_1 == lado_2 || lado_1 == lado_3 || lado_2 == lado_3) {
            printf("Triângulo Isósceles\n");
        } else {
            printf("Triângulo Escaleno\n");
        }
    } else {
        printf("Os lados não formam um triângulo válido.\n");
    }

    return 0;
}
