/*esse algoritmo recebe como entrada três valores (a, b & c) e calcula a fórmula de bhaskara utilizando eles*/



#include <stdio.h>
#include <math.h>
int main() {
    int a, b, c;
    float delta, x1, x2;

    printf("Digite os valores de a, b e c:\n");
    scanf("%d %d %d", &a, &b, &c);

    if (a == 0) {
        printf("Não é uma equação do segundo grau (a deve ser diferente de 0).\n");
    } else {
        delta = b * b - 4 * a * c;

        if (delta < 0) {
            printf("A equação não possui raízes reais.\n");
        } else {
            x1 = (-b + sqrt(delta)) / (2 * a);
            x2 = (-b - sqrt(delta)) / (2 * a);

            if (delta == 0) {
                printf("A equação possui uma raiz real: x = %.2f\n", x1);
            } else {
                printf("As raízes da equação são:\n");
                printf("x1 = %.2f\n", x1);
                printf("x2 = %.2f\n", x2);
            }
        }
    }

    return 0;
}
