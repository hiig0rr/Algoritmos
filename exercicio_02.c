/*esse algoritmo coleta a altura do usuario e retorna dizendo se a altura do usuário 
é maior, menor ou igual media nacional (feminina ou masculina)*/



#include <stdio.h>
int main() {
    int altura;
    char sexo;
    char continuar;

    do {
        printf("Digite sua altura em centímetros (ex: 175): ");
        scanf("%d", &altura);

        printf("Digite seu sexo (M para masculino, F para feminino): ");
        scanf(" %c", &sexo);  

        if (sexo == 'M' || sexo == 'm') {
            if (altura > 173) {
                printf("Você está acima da média masculina do brasil.\n");
            } else if (altura < 173) {
                printf("Você está abaixo da média masculina do brasil.\n");
            } else {
                printf("Você está na média masculina brasileira.\n");
            }
        } else if (sexo == 'F' || sexo == 'f') {
            if (altura > 160) {
                printf("Você está acima da média feminina do brasil.\n");
            } else if (altura < 160) {
                printf("Você está abaixo da média feminina do brasil.\n");
            } else {
                printf("Você está na média feminina brasileira.\n");
            }
        } else {
            printf("Sexo inválido. Use M ou F.\n");
        }

        printf("Deseja digitar outra altura? (s/n): ");
        scanf(" %c", &continuar);

    } while (continuar == 's' || continuar == 'S');

    return 0;
}
