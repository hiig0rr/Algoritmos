/*esse algoritmo responde com "e" quando o usuario digita "o" e vice versa*/



#include <stdio.h>

int main() {
    char letra;

    printf("Digite uma vogal: ");
    scanf(" %c", &letra);

    if (letra == 'o' || letra == 'O') {
        printf(" 'E'\n");
    } else {
    
    }
    
    if (letra == 'e' || letra == 'E') {
        printf(" 'O'\n");
    }
    return 0;
}
