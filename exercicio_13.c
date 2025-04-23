#include <stdio.h>

int main() {
    int idade_anos, idade_meses;
    printf("Digite sua idade em anos: ");
    scanf("%d", &idade_anos);
    idade_meses = idade_anos * 12;
    printf("Sua idade em meses é: %d meses.\n", idade_meses);

    return 0;
}