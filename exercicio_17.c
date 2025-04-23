/*esse algoritmo recebe 5 numeros inteiros digitados pelo usuario 
e organiza eles em ordem crescente*/



#include <stdio.h>

int main() {
    int numeros[5];
    int i, j, temp;
    for(i = 0; i < 5; i++) {
        printf("Digite o %dº número inteiro: ", i + 1);
        scanf("%d", &numeros[i]);
    }
    for(i = 0; i < 5 - 1; i++) {
        for(j = 0; j < 5 - 1 - i; j++) {
            if(numeros[j] > numeros[j + 1]) {
                temp = numeros[j];
                numeros[j] = numeros[j + 1];
                numeros[j + 1] = temp;
            }
        }
    }
    printf("\nNúmeros em ordem crescente:\n");
    for(i = 0; i < 5; i++) {
        printf("%d ", numeros[i]);
    }
    printf("\n");

    return 0;
}
