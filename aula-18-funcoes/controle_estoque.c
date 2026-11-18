#include <stdio.h>

float dobro(float quantidade) {
    float resultado;
    resultado = quantidade * 2;
    return resultado;
}

int main(void) {
    
    float quantidade;
    float quantidadeFinal;
    
    printf("===== CONTROLE DE ESTOQUE =====\n");
    printf("\nQuantidade inicial: ");
    scanf("%f", &quantidade);
    quantidadeFinal = dobro(quantidade);
    printf("\nQuantidade após duplicação: %.2f.\n", quantidadeFinal);
    
    return 0;
}
