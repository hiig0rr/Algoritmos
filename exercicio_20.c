/*esse algoritmo recebe 3 caracteres dados pelo usuario e organiza eles 
em ordem alfabetica*/



#include <stdio.h>

int main() {
    char a, b, c, temp;

    printf("Digite três caracteres: ");
    scanf(" %c %c %c", &a, &b, &c);
    if (a > b) { temp = a; a = b; b = temp; }
    if (a > c) { temp = a; a = c; c = temp; }
    if (b > c) { temp = b; b = c; c = temp; }

    printf("Em ordem alfabética: %c %c %c\n", a, b, c);

    return 0;
}
