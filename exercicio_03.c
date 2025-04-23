/*esse algoritmo coleta tres numeros inteiros chamados de a, b, c 
e organiza eles em ordem crescente*/

#include <stdio.h>
int main() {
    int a, b, c, temp;

    printf("Digite o valor de a: ");
    scanf("%d", &a);
    printf("Digite o valor de b: ");
    scanf("%d", &b);
    printf("Digite o valor de c: ");
    scanf("%d", &c);
    if (a > b) {
        temp = a;
        a = b;
        b = temp;
    }

    if (a > c) {
        temp = a;
        a = c;
        c = temp;
    }

    if (b > c) {
        temp = b;
        b = c;
        c = temp;
    }

   printf("Ordem crescente: %d, %d, %d", a, b, c);

    return 0;
}
