#include <stdio.h>

int memo[1000];

int fibonacci(int n) {
    if (n <= 1)
        return n;
    if (memo[n] != -1)
        return memo[n];
    memo[n] = fibonacci(n - 1) + fibonacci(n - 2);
    return memo[n];
}

int main() {
    int n;

    for (int i = 0; i < 1000; i++)
        memo[i] = -1;

    printf("Digite a posição da sequência Fibonacci que deseja calcular: ");
    scanf("%d", &n);

    if (n < 0 || n >= 1000) {
        printf("Número fora do intervalo permitido.\n");
    } else {
        printf("Fibonacci(%d) = %d\n", n, fibonacci(n));
    }

    return 0;
}