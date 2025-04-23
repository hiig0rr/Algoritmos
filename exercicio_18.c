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