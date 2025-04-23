/*esse algoritmo pede o nome idade, gênero e a altura do usuário e apresenta uma ficha com esses dados*/



#include <stdio.h>

int main() {
    char nome[50], genero[20]; 
    int idade;
    float altura;

    printf("Digite seu nome:");
    fgets(nome, sizeof(nome), stdin);

    printf("Digite sua idade:");
    scanf("%d", &idade);

    getchar();

    printf("Digite seu gênero (Masc/Fem):");
    fgets(genero, sizeof(genero), stdin);

    printf("Digite sua altura (em metros, ex: 1.75):");
    scanf("%f", &altura);

    printf("\nDados inseridos:\n");
    printf("Nome: %s", nome);
    printf("Idade: %d\n", idade);
    printf("Gênero: %s", genero);
    printf("Altura: %.2f metros\n", altura);

    return 0;
}
