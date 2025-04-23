#include <stdio.h>
#include <string.h>

int main() {
    int idade;
    char sexo[10];
    char nacionalidade[20];
    char deficiencia[4];

    printf("Digite a idade: ");
    scanf("%d", &idade);

    printf("Digite o sexo (masculino/feminino): ");
    scanf("%s", sexo);

    printf("Digite a nacionalidade: ");
    scanf("%s", nacionalidade);

    printf("Possui alguma deficiência grave? (sim/nao): ");
    scanf("%s", deficiencia);

    if (idade >= 18 && idade <= 45 &&
        strcmp(sexo, "masculino") == 0 &&
        strcmp(nacionalidade, "brasileiro") == 0 &&
        strcmp(deficiencia, "nao") == 0) {
        printf("Cidadão apto ao alistamento militar obrigatório.\n");
    } else {
        printf("Cidadão não apto ao alistamento militar obrigatório.\n");
    }

    return 0;
}