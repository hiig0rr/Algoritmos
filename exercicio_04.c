/*esse algoritmo recebe duas datas em anos, o menor valor precisa ser digitado primeiro
e o maior valor depois -ambos precisam ser inteiros- o algoritmo deve mostrar os anos bissextos
dentro do intervalo das duas entradas*/



#include <stdio.h>
int main() {
    int ano1, ano2;
    printf("Digite o primeiro ano (menor): ");
    scanf("%d", &ano1);

    printf("Digite o segundo ano (maior): ");
    scanf("%d", &ano2);

    if (ano1 >= ano2) {
        printf("Erro: o primeiro ano deve ser menor que o segundo.\n");
        return 1; 
    }

    printf("Anos bissextos entre %d e %d:\n", ano1, ano2);

    for (int ano = ano1; ano <= ano2; ano++) {
        if ((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0)) {
            printf("%d\n", ano);
        }
    }

    return 0;
}
