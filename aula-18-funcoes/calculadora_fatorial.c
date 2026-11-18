#include <stdio.h>

int calcularFatorial(int n) {
    int fatorial = 1;
    for (int i = 1; i <= n; i++) {
        fatorial = fatorial * i;
    }
    return fatorial;
    
}

int main(void) {
    
    int n;
    int resultadoFatorial;
    
    printf("===== CALCULADORA DE FATORIAL =====\n");
    printf("\nDigite um número [0 a 12]: ");
    scanf("%d", &n);
    
    resultadoFatorial = calcularFatorial(n);
    printf("\nFatorial de %d: %d.\n", n, resultadoFatorial);
    
    return 0;
    
}